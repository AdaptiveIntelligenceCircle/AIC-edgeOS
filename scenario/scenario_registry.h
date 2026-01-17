#include <iostream> 
using namespace std; 

#include "scenario.h"
#include <string> 

namespace aic :: edge :: scenario
{
    class ScenarioRegistry
    {
        void register_scenario(const Scenario&); 
        Scenario *get_active_scenario(); 
    }; 
}