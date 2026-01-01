#include <iostream>
using namespace std;

#include <string> 
#include <vector> 

namespace aic :: edge :: core
{
    struct ExecutionContext
    {
        bool allowed{true}; 
        int priority{0}; 
    }; 
}