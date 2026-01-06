#include "trust_engine.h"
#include "policy.cpp"
#include "trust_audit.h"

namespace aic::trust 
{

TrustEngine::TrustEngine() = default;

TrustDecision TrustEngine::evaluate(
    const std::string& entity_id,
    const TrustEvidence& evidence
) {
    auto& record = state_.entities[entity_id];

    if (evidence.severity > 0.7)
        record.violation_count++;

    if (record.violation_count > 3)
        record.level = TrustLevel::LOW;

    // Default conservative behavior
    if (record.level == TrustLevel::UNKNOWN)
        record.level = TrustLevel::MEDIUM;

    // Policy decision
    DefaultTrustPolicy policy;
    return policy.decide(record.level, evidence);
}

const TrustState& TrustEngine::state() const 
{
    return state_;
}

TrustResult TrustEngine :: evaluate(
    const std::string& entity_id,
    const TrustEvidence& evidence
)
{
    // log_audit(entity_id);
    // return result;
}

} // namespace aic::trust
