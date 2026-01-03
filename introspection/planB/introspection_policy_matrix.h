#pragma once 
#include <cstdint>

#include "introspection_level.h"
using namespace std; 

namespace aic :: introspection
{
    enum class SignalDomain : uint8_t 
    {
        SYSTEM = 0, 
        BEHAVIOR, 
        SECURITY, 
        RESOURCE, 
        AUTHORITY
    }; 

    enum class LifecycleAction : uint8_t
    {
        NO_OP =0, 
        LOG_ONLY, 
        MONITOR, 
        GATE,
        THROTTLE, 
        HALT
    }; 

    // Immutable policy interface.. 
    struct PolicyDecision
    {
        LifecycleAction action; 
        bool irreversible; // true for HALT - LEVEL ethics.. 
    };

    // Ethical Kernel interface,, 

    class IntrospectionPolicy
    {
        public:
        static PolicyDecision decide(
            SignalDomain domain, 
            SignalSeverity severity 
        ); 
    }; 
} // namespace aic :: introspection.. 