#include <string> 
using namespace std; 

struct ScenarioContext
{
    string enviroment; // local // edge // offline 
    string actor;  // human / system/ external
    string intent;  // inferred intent
    string sensitivity; // low / medium / high 
}; 