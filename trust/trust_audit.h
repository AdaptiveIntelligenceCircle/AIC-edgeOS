#pragma once 
#include <string> 

#include "../trust/trust_result.h"
using namespace std; 

namespace aic :: trust
{
    void log_audit(
        const string &entity_id, 
        const TrustResult &result, 
        const string &reason
    );
}