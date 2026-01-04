#pragma once 
#include <string> 

using namespace std; 
#include "trust_types.h"

namespace aic :: trust
{
    struct TrustEvidence
    {
        EvidenceType type; 
        string source; 
        double severity; 
        string description; 
    }; 
} // namespace aic :: trust 