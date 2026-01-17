#include <iostream>
using namespace std; 
#include "scenario_context.h"

class ScenarioPolicy
{
    public: 
    bool allow_execution(const ScenarioContext& ); 
    bool allow_learning(const ScenarioContext&); 
}; 