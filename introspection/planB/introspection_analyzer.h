#pragma once 
#include "introspection_snapshot.h"

#include <string> 
using namespace std;

namespace aic :: introspection
{
    struct IntrospectionReport
    {
        uint64_t snapshot_id; 
        string summary; 
        IntrospectionLevel level; 
    }; 

    class IntrospectionAnalyzer
    {
        public: 
        
    }; 
}