#include <vector> 
#include <iostream>

#include "state_snapshot.h"
using namespace std; 

namespace aic :: edge :: core
{
    struct StateChange
    {
        string key; 
        double old_value; 
        double new_value; 
    };

    class StateDiff
    {
        public: 
        static vector<StateChange> diff(
            const StateSnapshot &old_s, 
            const StateSnapshot &new_s
        ); 
    }; 
}