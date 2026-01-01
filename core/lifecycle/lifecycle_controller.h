#include <iostream>
using namespace std; 

#include <string> 
#include <algorithm>

namespace aic :: edge :: core
{
    enum class LifeCycleState
    {
        INIT, 
        RUNNING, 
        STRESSED, 
        DEGRADED, 
        RECOVERY
    }; 

    class LifeCycleController
    {
        public: 
        void transition(LifeCycleState next); 
        LifeCycleState current() const;

        private: 
        LifeCycleState state{
            LifeCycleState :: INIT
        }; 
    };
}