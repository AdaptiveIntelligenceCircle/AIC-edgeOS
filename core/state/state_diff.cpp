#include "state_diff.h"
using namespace std; 
#include "state_snapshot.h"

namespace aic :: edge :: core
{
    vector<StateChange> StateDiff :: diff(
        const StateSnapshot &old_s, 
        const StateSnapshot &new_s
    )
    {
        vector<StateChange> changes; 
        for (const auto &[key, new_val] : new_s.states)
        {
            double old_val = 0.0; 
            try{
                old_val = old_s.get(key); 
            } catch(...)
            {
                old_val = 0.0; 
            }
            if (old_val != new_val)
            {
                changes.push_back(StateChange{key, old_val}); 
            }
        }
        return changes; 
    }
}