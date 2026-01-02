#include <iostream> 
using namespace std; 

#include <stdexcept>
#include <string> 
#include "state_snapshot.h"

namespace aic :: edge :: core
{
    void StateSnapshot :: capture(const string &key, double value)
    {
        states[key] = value; 
    }

    double StateSnapshot :: get(const string &key) const 
    {
        auto it  = states.find(key); 
        if (it == states.end())
        {
            throw runtime_error("State key not found."); 
        }
        return it -> second;
    }
}