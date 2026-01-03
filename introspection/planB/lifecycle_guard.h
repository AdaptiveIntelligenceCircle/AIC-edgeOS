#pragma once 
#include <cstdint> 

#include "introspection_policy_matrix.h"
using namespace std;

namespace aic :: core
{
    enum class LifeCycleState : uint8_t 
    {
        INIT = 0 , 
        RUNNING, 
        DEGRADED, 
        THROTTLED, 
        HALTED
    };
    
    class LifeCycleGuard
    {
        public: 
        static LifeCycleState current_state(); 

        // entry point duy nhat cho ethical enforcement.. 
        static void enforce(
            introspection :: SignalDomain domain, 
            introspection :: SignalSeverity severity
        );

        private: 
        static void apply_action(
            introspection :: LifecycleAction action, 
            bool irreversible
        ); 

        static void halt_system(bool forensic); 
    }; 
} // namespace aic :: core.. 