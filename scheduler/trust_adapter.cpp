#include "trust_engine.h"
using namespace std; 

namespace aic :: trust
{
    TrustEngine :: TrustEngine() = default;
    
    TrustResult TrustEngine :: evaluate(
        const string &entity_id, 
        const TrustEvidence &ev
    )
    {
        auto &record = state_.entities[entity_id]; 

        if (ev.severity > 0.7)
        record.violation_count++; 

        if (record.violation_count > 3)
        record.level = TrustLevel :: LOW; 

        if (record.level == TrustLevel :: UNKNOWN)
        record.level = TrustLevel :: MEDIUM; 

        TrustResult result; 
        result.confidence = 1.0 - ev.severity; 

        switch (record.level) 
        {
        case TrustLevel::ROOT:
        case TrustLevel::HIGH:
            result.constraint = TrustConstraint::NONE;
            break;

        case TrustLevel::MEDIUM:
            result.constraint = TrustConstraint::SOFT_LIMIT;
            break;

        case TrustLevel::LOW:
            result.constraint = TrustConstraint::HARD_LIMIT;
            break;

        default:
            result.constraint = TrustConstraint::BLOCK;
        }

    return result;
    }

    const TrustState &TrustEngine :: state() const
    {
        return state_; 
    }
}