#include <iostream>
using namespace std; 

namespace aic :: edge :: scenario
{
    enum class ScenarioType
    {
        HUMAN_INTERACTION, 
        SECURITY_EVENT, 
        SYSTEM_DEGRADATION, 
        TRUST_ESCALATION, 
        ETHICAL_CONFLICT
    }; 
}