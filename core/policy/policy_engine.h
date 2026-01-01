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
        void evaluate(const StateSnapshot &snapshot); 
    }; 
}