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

class ScenarioState
{
    ScenarioState(); 

    ScenarioPhase phase() const; 
    void set_phase(ScenarioPhase p); 
    bool is_terminal() const ; 

    private: 
    ScenarioPhase phase_;
}; 