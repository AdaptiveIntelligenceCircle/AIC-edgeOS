#include "scenario.h"
using namespace std;
#include "scenario_state.h"

namespace aic :: edge :: scenario
{
    // Scenario :: Scenario (string id)
    // : scenario_id_(move(id))
    // {

    // }

    const string &Scenario :: id() const 
    {
        return scenario_id_; 
    }

    ScenarioContext &Scenario :: context()
    {
        return context_; 
    }

    ScenarioState &Scenario :: state()
    {
        return state_;
    }
}