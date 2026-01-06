#include "trust/trust_engine.h"
#include "unit/common/test_assert.h"

using namespace aic;

int main() {
    trust::TrustEngine engine;
    const std::string id = "task_x";

    trust::TrustConstraint last = trust::TrustConstraint::NONE;

    for (double s = 0.0; s <= 1.0; s += 0.05) {
        trust::TrustEvidence ev{
            EvidenceType::BEHAVIOR,
            id,
            s,
            "property test"
        };

        auto r = engine.evaluate(id, ev);

        // constraint không được nới lỏng khi severity tăng
        ASSERT_TRUE(
            static_cast<int>(r.constraint) >= static_cast<int>(last)
        );

        last = r.constraint;
    }

    return 0;
}
