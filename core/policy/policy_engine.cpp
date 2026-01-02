#include "policy_engine.h"
using namespace std; 

#include <iostream>
#include <string> 

namespace aic :: edge :: core
{
    // void PolicyEngine :: evaluate(const StateSnapshot &snapshot)
    // {
    //     // minimal placeholder.. 
    //     // real logic : thresholding, cooldown, trust-signal.. 
    //     (void)snapshot; 
    // }
    PolicyEngine :: LifecycleHint PolicyEngine :: evaluate(const StateSnapshot &snapshot)
    {
        // minimal heuristic based hinting (edge-safe).. 
        // Example signals : cpu_load, memory_pressure, error... 
        try
        {
            double cpu = snapshot.contains("Cpu load") ? snapshot.get("cppu_load") :0.0; 
            double mem = snapshot.contains("memory_pressure") ? snapshot.get("memory_pressure"): 0.0; 

            if (cpu > 0.9 or mem > 0.9)
            {
                return LifecycleHint :: SUGGEST_DEGRADED; 
            }
            if (cpu > 0.7 or mem > 0.7)
            {
                return LifecycleHint :: SUGGEST_STRESSED; 
            }
            if (cpu < 0.4 and mem <  0.4)
            {
                return LifecycleHint :: SUGGEST_RECOVERY; 
            }
        }
        catch(...)
        {
            return LifecycleHint :: NONE; 
        }
        return LifecycleHint :: STAY; 
    }
}