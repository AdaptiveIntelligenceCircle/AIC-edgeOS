#pragma once 
#include <string> 

#include <iostream>
using namespace std; 

namespace aic :: runtime
{
    class RollbackGuard
    {
        public: 
        void snapshot(const string &entity_id); 
        void rollback(const string &entity_id); 

        private: 
        // sau nay map sang snapshot engine// 
    }; 
}