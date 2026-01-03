#pragma once 
#include "introspection_collector.h"

#include "introspection_analyzer.h"
#include "introspection_guard.h"

using namespace std; 

namespace aic :: introspection
{
    class IntrospectionInterface
    {
        public: 
        virtual ~IntrospectionInterface() = default; 

        virtual void set_guard(const IntrospectionGuard *guard) = 0; 
        virtual IntrospectionReport inspect() = 0; 

        protected: 
        IntrospectionInterface() = default; 
    }; 
} // namespace aic :: introspection.. 