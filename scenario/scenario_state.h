#include <string>

using namespace std; 

#include <algorithm>

enum class ScenarioPhase
{
    INIT, 
    EVALUATING, 
    APPROVED, 
    REJECTED, 
    EXECUTING, 
    COMPLETED, 
    ROLLED_BACK
}; 