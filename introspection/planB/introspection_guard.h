#pragma once 

#include "introspection_types.h"
using namespace std; 

namespace aic :: introspection
{
    class IntrospectionGuard
    {
        public: 
        virtual ~IntrospectionGuard () = default; 

        virtual bool allow_collection(IntrospectionDomain domain) const = 0; 
        virtual bool allow_analysis(IntrospectionLevel level) const = 0; 

        protected: 
        IntrospectionGuard() =default; 
    };
} // namespace aic :: introspection.. 