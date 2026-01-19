#include "scenario_registry.h"

using namespace std; 

namespace aic :: edge :: scenario 
{
    void ScenarioRegistry :: register_scenario(shared_ptr<Scenario> scenario)
    {
        scenarios_.push_back(move(scenario)); 
    }

    shared_ptr<Scenario> ScenarioRegistry :: get_active_scenario()
    {
        if (scenarios_.empty())
        {
            return nullptr; 
        }

        return scenarios_.back(); 
    }
}
