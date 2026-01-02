#pragma once 
#include "introspection_types.h"
#include <string> 
#include <cstdint>

using namespace std; 

namespace aic :: introspection
{
    struct IntrospectionSignal
    {
        uint64_t timestamp; 
        IntrospectionDomain domain; 
        SignalSeverity severity; 
        string source; 
        string description; 
    }; 
}