#include "../trust/trust_engine.h"
#include "scheduler/scheduler_type.h"

#include "scheduler/scheduler_trust_bridge.h"
#include "unit/common/test_assert.h"

namespace aic :: trust
{
    int main ()
    {
        /*
        trust :: TrustEngine trust_engine; 

        // Fake evidence tu introspection.. 
        trust :: TrustEvidence :: BEHAVIOR 
        ev.type = trust :: EvidenceType :: BEHAVIOR; 
        ev.source = ""; 
        ev.severity = 0.0;
        ev.description = "Abnormal execution frequency".. 

        */

        // Trust danh gia .. 
        trust :: TrustResult result; 

        // scheduler ap constraint.. 
        scheduler :: ScheduleDecision decision = 
        scheduler :: applyTrustConstraint(
            result.constraint, 
            scheduler :: TaskPriority :: HIGH
        ); 

        ASSERT_TRUE (
            decision == scheduler :: ScheduleDecision :: DELAY or 
            decision == scheduler :: ScheduleDecision :: ABORT
        ); 
        return 0; 
    }
}
