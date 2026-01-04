#pragma once 
#include "trust_types.h"

#include "trust_evidence.h"
using namespace std; 

// Trust policy khong dua ra su that
// No dat gioi han hanh vi.. 
namespace aic :: trust
{
    class TrustPolicy
    {
        public: 
        virtual ~TrustPolicy() = default; 

        virtual TrustDecision decide(
            TrustLevel level, 
            const TrustEvidence &evidence 
        )const = 0; 
    }; 
} // namespace aic :: trust.. 