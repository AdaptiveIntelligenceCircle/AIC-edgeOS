#include <iostream>
using namespace std; 
#include "core_events.h"
namespace aic :: edge :: core
{
    class CoreAPI
    {
        public: 
        virtual ~CoreAPI() = default; 
        virtual void emit(CoreEvent ev) = 0; 
    }; 
}