#pragma once 
#include <string> 
#include <cstdint>
#include <algorithm>
using namespace std; 

namespace aic :: introspection
{
    enum class IntrospectionLevel : uint8_t 
    {
        NONE = 0, 
        BASIC, 
        EXTENDED, 
        CRITICAL
    }; 

    enum class IntrospectionDomain : uint8_t 
    {
        SYSTEM, 
        BEHAVIOR,
        SECURITY, 
        RESOURCE, 
        COMMUNICATION
    }; 

    enum class SignalSeverity : uint8_t
    {
        INFO, 
        WARNING, 
        ALERT, 
        FATAL
    }; 
} // namespace aic :: introspection.. 