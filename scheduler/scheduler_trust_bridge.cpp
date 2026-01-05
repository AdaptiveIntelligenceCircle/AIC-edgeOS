#include "scheduler_trust_bridge.h"
using namespace std;

namespace aic :: scheduler
{
    ScheduleDecision applyTrustConstraint(
        trust :: TrustConstraint constraint, 
        TaskPriority priority 
    )
    {
        switch (constraint)
        {
        case trust :: TrustConstraint ::NONE: 
        return ScheduleDecision ::EXECUTE_NOW; 

        case trust :: TrustConstraint :: SOFT_LIMIT: 
        return ScheduleDecision ::DELAY; 

        case trust :: TrustConstraint :: HARD_LIMIT: 
        return (priority == TaskPriority ::CRITICAL)
        ? ScheduleDecision :: EXECUTE_NOW : 
        ScheduleDecision :: ABORT; 

        case trust :: TrustConstraint :: BLOCK: 
        return ScheduleDecision :: ABORT; 
        
        default:
            break;
        }
        return ScheduleDecision ::SKIP; 
    }
}