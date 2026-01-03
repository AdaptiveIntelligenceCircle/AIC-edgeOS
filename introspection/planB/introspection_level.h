#pragma once 
#include <cstdint>

using namespace std; 

namespace aic :: introspection
{
    enum class IntrospectionLevel : uint8_t 
    {
        OBSERVE = 0, 
        TRACE, 
        ANALYZE, 
        ESCALATE
    }; 

    enum class SignalSeverity : uint8_t
    {
        INFO = 0, 
        LOW, 
        MEDIUM, 
        HIGH, 
        CRITICAL
    }; 
} // namespace aic :: introspection.. 