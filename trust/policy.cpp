#include "policy.h"
using namespace std; 

namespace aic :: trust
{
    class DefaultTrustPolicy : public TrustPolicy
    {
        public: 
        TrustDecision decide(
            TrustLevel level,
            const TrustEvidence &ev
        )const override
        {
            if (level == TrustLevel :: ROOT)
            return TrustDecision ::ALLOW; 

            if (ev.severity > 0.9)
            return TrustDecision :: DENY; 

            if (level == TrustLevel :: LOW)
            return TrustDecision ::MONITOR; 

            return TrustDecision ::LIMIT; 
        }
    }; 
} // namespace aic :: trust
