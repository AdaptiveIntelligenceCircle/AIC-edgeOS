#include "scenario_context.h"
using namespace std; 

namespace aic :: edge :: scenario
{
    bool ScenarioContext :: is_valid() const 
    {
        return !enviroment.empty() 
        and !actor.empty() and 
        !intent.empty();
    }   
}