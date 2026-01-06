#pragma once 
#include "../trust/trust_evidence.h"
#include "../trust/trust_types.h"
using namespace std ; 
#include <iostream>

namespace unit :: fake
{
    inline aic :: trust :: TrustEvidence
    make_normal_behavior(const string &src)
    {
        return 
        {
            EvidenceType :: BEHAVIOR,
            src, 
            0.1, 
            "Normal behavior"
        };
    }

    inline aic :: trust :: TrustEvidence
    make_suspicious_behavior(const string &src)
    {
        return 
        {
            EvidenceType :: BEHAVIOR, 
            src, 
            0.95, 
            "Critical anomaly detected"
        }; 
    }
}

