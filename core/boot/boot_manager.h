#include <iostream> 
using namespace std; 
#include <string> 
#include "core_config.h"

namespace aic :: edge :: core
{
    class BootManager
    {
        public: 
        explicit BootManager (const CoreConfig &cfg);  
        bool boot(); 

        private: 
        CoreConfig config ; 
    };
}