#include "adaptive_scheduler.h"
#include <iostream> 

#include <string> 
using namespace std;

namespace aic :: scheduler
{
    AdaptiveScheduler :: AdaptiveScheduler()
    {
        // default decision hook : conservative.. 
        decision_hook_ = [](const ScheduledTask &task, 
        const SchedulerContext &ctx)
        {
            if (!ctx.trusted and task.priority != TaskPriority :: CRITICAL)
            return SchedulerDecision :: SKIP ;
            if (ctx.risk_score > 0.8)
            return SchedulerDecision :: DELAY; 

            return SchedulerDecision :: EXECUTE_NOW; 
        }; 
    }

    void AdaptiveScheduler :: registerTask(const ScheduledTask &task)
    {
        tasks_[task.id] = task; 
    }

    void AdaptiveScheduler :: removeTask(const string &task_id)
    {
        tasks_.erase(task_id); 
    }

    void AdaptiveScheduler :: setDecisionHook(
        function<SchedulerDecision(
            const ScheduledTask&, 
            const SchedulerContext&
        )> hook 
    )
    {
        decision_hook_ = move(hook); 
    }

    void AdaptiveScheduler :: tick(const SchedulerContext &context)
    {
        auto now = chrono :: steady_clock :: now(); 

        for (auto &[id, task] : tasks_)
        {
            if (!shouldRunNow(task))
            continue; 

            SchedulerDecision decision = decide(task, context); 

            switch(decision)
            {
                case SchedulerDecision :: EXECUTE_NOW: 
                try
                {
                    task.callback(); 
                    task.last_executed = now; 
                }
                catch(...)
                {
                    //std::cerr << e.what() << '\n';
                    cerr << "Scheduler - Task failed:" << id << "" << endl; 
                }
                break; 
                
                case SchedulerDecision :: DELAY:
                // intentionally do nothing.. 
                break; 

                case SchedulerDecision :: SKIP: 
                break; 

                case SchedulerDecision :: ABORT: 
                removeTask(id);
                break; 
            }
        }
    }
    SchedulerDecision AdaptiveScheduler :: decide(
        const ScheduledTask &task, 
        const SchedulerContext &context 
    )
    {
        if (decision_hook_)
        return decision_hook_(task, context); 

        return SchedulerDecision :: EXECUTE_NOW; 
    }

    bool AdaptiveScheduler :: shouldRunNow(const ScheduledTask &task)
    {
        auto now = chrono :: steady_clock :: now(); 
        return (now - task.last_executed) >=task.base_interval; 
    }
} // 