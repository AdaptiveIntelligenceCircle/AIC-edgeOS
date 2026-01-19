#include <iostream> 
using namespace std; 

#include "scenario.h"
#include <string>

#include <memory>
#include <vector>

namespace aic :: edge :: scenario
{
    class ScenarioRegistry
    {
        public: 
        void register_scenario(shared_ptr<Scenario> scenario);; 
        shared_ptr<Scenario> get_active_scenario();

        private: 
        vector<shared_ptr<Scenario>> scenarios_; 
    }; 
}