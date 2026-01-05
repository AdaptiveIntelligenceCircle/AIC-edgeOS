#pragma once 
#include <string>

#include "trust_state.h"
#include "trust_evidence.h"

#include "policy.h"
#include "trust_result.h"
using namespace std; 

namespace aic :: trust
{
    class TrustEngine
    {
        public : 
        TrustEngine(); 

        TrustResult evaluate(
            const string &entity_id, 
            const TrustEvidence &evidence  
        ); 

        const TrustState &state() const; 

        private: 
        TrustState state_; 
    }; 
}