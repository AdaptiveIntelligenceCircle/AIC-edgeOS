#include <string> 
using namespace std; 

#include <algorithm>
#include <iostream> 

namespace aic :: edge :: core
{
    struct CoreConfig
    {
        bool safe_mode {
            false 
        };

        bool enable_introspection{
            true
        }; 

        string node_id {
            "local-node" 
        }; 
    }; 
}