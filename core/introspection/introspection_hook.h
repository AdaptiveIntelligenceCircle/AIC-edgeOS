#include <iostream>
using namespace std;
#include "state_diff.h" 

namespace aic :: edge :: core
{
    class IntrospectionHook
    {
        public:
        virtual ~IntrospectionHook() = default; 
        virtual void on_state_change(const StateChange &); 
    }; 
}