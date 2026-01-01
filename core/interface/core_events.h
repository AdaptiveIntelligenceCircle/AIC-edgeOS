#include <iostream>
using namespace std;

namespace aic::edge::core
{
    enum class CoreEvent
    {
        STATE_CHANGED,
        POLICY_UPDATED,
        ANOMALY_DETECTED
    };
}