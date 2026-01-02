#include <iostream>
using namespace std; 

#include <string> 
#include <algorithm>

#include "core/state/state_snapshot.h"

namespace aic :: edge :: core
{
    class PolicyEngine
    {
        public: 
        enum class LifecycleHint
        {
            NONE, 
            STAY, 
            SUGGEST_STRESSED, 
            SUGGEST_DEGRADED, 
            SUGGEST_RECOVERY
        };

        LifecycleHint evaluate(const StateSnapshot &snapshot); 
    }; 
}