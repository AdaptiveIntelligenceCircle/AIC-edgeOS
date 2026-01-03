#pragma once 
#include "introspection_signal.h"

using namespace std;
#include <vector> 

namespace aic :: introspection
{
    struct IntrospectionSnapshot
    {
        uint64_t snapshot_id; 
        uint64_t captured_at; 
        vector<IntrospectionSignal> signals; 

        // snapshot la du lieu chet - khong mutate.. 
    }; 
} // namespace aic :: introspection.. 