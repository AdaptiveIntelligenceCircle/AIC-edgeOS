#pragma once 
#include <string> 

#include "scenario_context.h"
#include "scenario_state.h"

using namespace std; 

namespace aic :: edge :: scenario
{
    class Scenario
    {
        public: 
        Scenario (string id); 
        Scenario() = default; 
        
        const string &id() const; 

        ScenarioContext &context(); 
        ScenarioState &state(); 

        private: 

        string scenario_id_; 
        ScenarioContext context_ ;
        ScenarioState state_; 
    }; 
}