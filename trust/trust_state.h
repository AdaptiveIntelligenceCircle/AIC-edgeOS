#pragma once 
#include <unordered_map>

#include <string> 
#include "trust_types.h"

using namespace std; 

namespace aic :: trust
{
    struct TrustRecord
    {
        TrustLevel level = TrustLevel :: UNKNOWN; 
        double confidence = 0.0; 
        int violation_count = 0; 
    }; 

    struct TrustState
    {
        unordered_map<string, TrustRecord> entities;
    }; 
}