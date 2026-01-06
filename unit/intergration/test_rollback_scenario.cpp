#include "../trust/trust_engine.h"
#include "../scheduler/scheduler_trust_bridge.h"
#include "../scheduler/scheduler_type.h"

#include "../unit/common/fake_introspection.h"
#include "../unit/common/test_assert.h"
using namespace std; 

using namespace aic; 

int main ()
{
    aic ::trust :: TrustResult trust_engine; 

    const string task_id = "edge_sync_task"; 

    // Giai doan 1 : binh thuong .. 
    // auto ev1 = unit :: fake :: make_normal_behavior(task_id); 
    // auto r1 = trust_engine.evaluate(); 
    // // trust_engine.evaluate(task_id)

    // ASSERT_EQ(r1.constraint, trust::TrustConstraint::NONE);

    // // Giai đoạn 2: bất thường lặp lại
    // auto ev2 = unit::fake::make_suspicious_behavior(task_id);
    // // trust_engine.evaluate(task_id, ev2);
    // // trust_engine.evaluate(task_id, ev2);

    // // Giai đoạn 3: hành vi nguy hiểm
    // auto ev3 = unit::fake::make_malicious_behavior(task_id);
    // auto r3 = trust_engine.evaluate(task_id, ev3);

    // ASSERT_TRUE(
    //     r3.constraint == trust::TrustConstraint::HARD_LIMIT ||
    //     r3.constraint == trust::TrustConstraint::BLOCK
    // );

    // // Scheduler phản ứng
    // auto decision = scheduler::applyTrustConstraint(
    //     r3.constraint,
    //     scheduler::TaskPriority::NORMAL
    // );

    // ASSERT_EQ(decision, scheduler::ScheduleDecision::ABORT);
    return 0; 
}
