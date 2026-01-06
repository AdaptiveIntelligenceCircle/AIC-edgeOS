#include "unit/common/test_assert.h"

using namespace std; 

// Gia lap ket qua tu Lua binding..
string lua_decide (double severity)
{
    if (severity > 0.9) return "BLOCK"; 
    if (severity > 0.6) return "HARD_LIMIT"; 
    if (severity > 0.3) return "SOFT_LIMIT"; 
    return "NONE";
}

int main ()
{
    ASSERT_EQ(lua_decide(0.95), "BLOCK"); 
    ASSERT_EQ(lua_decide(0.7), "HARD_LIMIT");
    ASSERT_EQ(lua_decide(0.4), "SOFT_LIMIT");
    ASSERT_EQ(lua_decide(0.1), "NONE");
    return 0; 
}