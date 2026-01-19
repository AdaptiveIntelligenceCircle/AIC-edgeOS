#include "scenario_policy.h"
using namespace std; 

namespace aic :: edge :: scenario
{
    bool ScenarioPolicy :: allow_execution(const ScenarioContext &ctx)
    {
        return ctx.sensitivity != "high";
    }

    bool ScenarioPolicy :: allow_learning(const ScenarioContext &ctx)
    {
        return ctx.actor != "system"; 
    }
}