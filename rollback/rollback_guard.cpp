#include "rollback_guard.h"
#include <iostream>
using namespace std; 

namespace aic :: runtime
{
    void RollbackGuard :: snapshot(const string &entity_id)
    {
        cout <<"Rollback - snapshot taken for" << entity_id << endl; 
    }

    void RollbackGuard :: rollback(const string &entity_id)
    {
        cout << "Rollback - rollback triggered for " << entity_id << endl; 
    }
}