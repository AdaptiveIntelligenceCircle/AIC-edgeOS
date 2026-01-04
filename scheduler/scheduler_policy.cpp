#include "scheduler_policy.h"
using namespace std; 

namespace aic :: scheduler
{
    // default conservative policy.. 
    // co the thay bang lua hoac policy khac.. 
    class DefaultSchedulePolicy : public SchedulePolicy
    {
        public: 
        ScheduleDecision decide(
            TaskPriority priority, 
            const SchedulerContext context
        ) const override 
        {
            if (!context.trusted and priority != TaskPriority :: CRITICAL)
            return ScheduleDecision::SKIP; 

            if (context.risk_score > 0.85)
            return ScheduleDecision :: DELAY; 

            if (context.system_load > 0.9 and priority == TaskPriority :: LOW)
            return ScheduleDecision :: DELAY; 

            return ScheduleDecision :: EXECUTE_NOW; 
        }
    }; 
    
} // namespace aic :: scheduler.. 