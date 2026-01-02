#include "state_diff.h"
using namespace std;
#include "state_snapshot.h"

namespace aic::edge::core
{
    vector<StateChange> StateDiff::diff(
        const StateSnapshot &old_s,
        const StateSnapshot &new_s)
    {

        vector<StateChange> changes;

        const auto &new_view = new_s.view();
        const auto &old_view = old_s.view();

        for (const auto &[key, new_val] : new_view)
        {
            auto it = old_view.find(key);
            double old_val = (it == old_view.end()) ? 0.0 : it->second;

            if (old_val != new_val)
            {
                changes.push_back(StateChange{key, old_val, new_val});
            }
        }
        return changes;
    }
}

