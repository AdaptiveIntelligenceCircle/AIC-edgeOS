#include <unordered_map>
#include <string> 

using namespace std; 

namespace aic :: edge :: core
{
    class StateSnapshot
    {
        public:
        void capture(const string &key, double value); 
        double get(const string &key) const; 
 
        unordered_map<string, double> states; 
    }; 
}