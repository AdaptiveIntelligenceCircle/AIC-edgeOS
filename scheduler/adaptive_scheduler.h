#pragma once 
#include <string> 
#include <chrono>

using namespace std; 
#include <unordered_map>
#include <functional>

#include <optional>
#include <iostream>

namespace aic :: scheduler
{
    // scheduler khong phai timer.. 
    // No la bo dieu phoi hanh vi theo ngu canh.. // 
    enum class TaskPriority
    {
        LOW, 
        NORMAL, 
        HIGH, 
        CRITICAL
    }; 

    enum class SchedulerDecision
    {
        EXECUTE_NOW, 
        DELAY,
        SKIP, 
        ABORT
    }; 

    struct SchedulerContext
    {
        double system_load = 0.0; 
        double risk_score = 0.0; 
        bool trusted = true; 
    };

    struct ScheduledTask
    {
        string id; 
        TaskPriority priority; 
        function<void()> callback; 

        chrono :: milliseconds base_interval; 
        chrono :: steady_clock :: time_point last_executed; 
    }; 

    class AdaptiveScheduler
    {
        public: 
        AdaptiveScheduler(); 

        void registerTask(const ScheduledTask &task); 
        void removeTask(const string &task_id);
        
        void tick(const SchedulerContext &context); 

        void setDecisionHook(
            function<SchedulerDecision(
                const ScheduledTask&, 
                const SchedulerContext&
            )> hook
        );

        private: 

        SchedulerDecision decide(
            const ScheduledTask &task, 
            const SchedulerContext &context
        );

        bool shouldRunNow(const ScheduledTask &task); 

        public: 
        unordered_map<string, ScheduledTask> tasks_;
        function<SchedulerDecision(
        const ScheduledTask&,
        const SchedulerContext&
        )> decision_hook_;
    }; 
}
