#include "trust_audit.h"
#include <iostream> 

using namespace std; 

namespace aic :: trust
{
    void log_audit(
        const string &entity_id, 
        const TrustResult &result , 
        const string &reason 
    )
    {
        cout << "[Trust_audit] entity = " << entity_id 
        << "Constraint = " << static_cast<int>(result.constraint) 
        << "confidence = " << result.confidence 
        << "reason = " << reason << endl; 
    }
}