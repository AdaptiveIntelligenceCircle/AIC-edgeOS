#pragma once 
#include <string> 

#include "trust/trust_engine.h"
#include "trust/trust_evidence.h"
#include "trust/trust_types.h"
#include "trust/trust_result.h"

using namespace std; 

namespace aic :: scheduler
{
    class TrustAdapter
    {
        public: 
        explicit TrustAdapter(trust :: TrustEngine &engine); 

        trust :: TrustResult check(
            const string &entity_id , 
            const trust :: TrustEvidence &evidence
        ); 

        private: 
        trust :: TrustResult &trust_engine_;
    }; 
}