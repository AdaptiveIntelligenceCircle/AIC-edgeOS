#include "scenario_state.h"

namespace aic :: edge :: scenario
{
    ScenarioState :: ScenarioState(): phase_(ScenarioPhase :: INIT)
    {}
    
    ScenarioPhase ScenarioState :: phase() const 
    {
        return phase_ ; 
    }

    void ScenarioState :: set_phase(ScenarioPhase p)
    {
        phase_ = p; 
    }

    bool ScenarioState :: is_terminal() const 
    {
        return phase_ == ScenarioPhase ::COMPLETED
        or phase_ == ScenarioPhase :: REJECTED 
        or phase_ == ScenarioPhase :: ROLLED_BACK; 
    }
}