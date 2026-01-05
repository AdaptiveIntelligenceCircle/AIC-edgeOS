#pragma once 
#include "scheduler_type.h"

#include "../trust/trust_result.h"
using namespace std; 

namespace aic :: scheduler
{
    ScheduleDecision applyTrustConstraint
    (trust :: TrustConstraint constraint, 
    TaskPriority priority); 
}