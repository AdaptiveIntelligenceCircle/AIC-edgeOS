#include <iostream>
using namespace std; 

#include "lifecycle_controller.h"
#include <vector> 

namespace aic :: edge :: core
{
    void LifeCycleController :: transition(LifeCycleState next)
    {
        // soft transition - no hard guard here.. 
        state = next; 
    }

    LifeCycleState LifeCycleController :: current() const
    {
        return state; 
    }
}