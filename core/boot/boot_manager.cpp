#include "boot_manager.h"
using namespace std; 

#include <iostream> 

namespace aic :: edge :: core
{
    BootManager :: BootManager(const CoreConfig &cfg) : config(cfg)
    {

    }

    bool BootManager :: boot()
    {
        // edge boot sequence .. 
        // config -> state -> policy -> execution.. 
        if (config.safe_mode)
        {
            // degraded boot .. 
            return true; 
        }
        return true; 
    }
}