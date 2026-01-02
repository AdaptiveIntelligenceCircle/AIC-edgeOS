#include <unordered_map>
#include <string> 

using namespace std; 

namespace aic :: edge :: core
{
    class StateSnapshot
    {
        public:
        using StateMap  = unordered_map<string, double> ; 
        void capture(const string &key, double value); 
        double get(const string &key) const; 

        // read only acessors (no mutation..) 
        bool contains(const string &key) const{}
        const StateMap &view() const noexcept; 
 
        // unordered_map<string, double> states; 

        private: 
        StateMap states; 
    }; 
}