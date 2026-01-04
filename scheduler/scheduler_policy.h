#pragma once

#include "scheduler_type.h"

namespace aic :: scheduler
{
    // policy doc lap voi scheduler.. 
    // Co the
    // - hard code
    // - load tu lua .. 
    // Hoac hoc sau nay.. 

    struct SchedulerContext
    {
        double system_load = 0.0; 
        double risk_score = 0.0; 
        bool trusted = true; 
    }; 

    class SchedulePolicy
    {
        public: 
        virtual ~SchedulePolicy() = default; 

        virtual ScheduleDecision decide(
            TaskPriority priority, 
            const SchedulerContext context 
        ) const = 0; 
    }; 
}