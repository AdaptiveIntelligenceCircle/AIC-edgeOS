#include "scenario_evaluator.h"

using namespace std; 

namespace aic :: edge :: scenario
{
    bool ScenarioEvaluator :: evaluate_risk(const ScenarioContext &ctx)
    {
        return ctx.sensitivity != "high"; 
    }

    bool ScenarioEvaluator :: evaluate_risk(const ScenarioContext & ctx)
    {
        return ctx.actor != "unknown"; 
    }

    bool ScenarioEvaluator :: evaluate_ethics(const ScenarioContext &)
    {
        return true; 
    }
}