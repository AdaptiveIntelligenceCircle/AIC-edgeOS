#pragma once 
#include "introspection_snapshot.h"

using namespace std; 
#include <iostream>

namespace aic :: introspection
{
    class IntrospectionCollector
    {
        public: 
        virtual ~IntrospectionCollector() = default; 

        virtual IntrospectionSnapshot collect() = 0; 

        protected: 
        IntrospectionCollector() = default; 
    };
} // namespace aic :: introspection.. 