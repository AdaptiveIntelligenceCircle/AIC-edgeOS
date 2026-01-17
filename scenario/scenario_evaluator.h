#include <string> 
#include "scenario_context.h"

#include <iostream>
using namespace std;

class ScenarioEvaluator
{
    public: 
    bool evaluate_risk(const ScenarioContext&);

    bool evaluate_trust(const ScenarioContext&); 
    bool evaluate_ethics(const ScenarioContext&); 
    
}; 