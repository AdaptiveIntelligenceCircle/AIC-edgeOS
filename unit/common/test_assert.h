#pragma once
#include <iostream>
#include <cstdlib>
using namespace std; 

#define ASSERT_TRUE(x) \
    if (!(x)) { \
        cerr << "ASSERT_TRUE failed: " #x << endl; \
        exit(1); \
    }

#define ASSERT_EQ(a, b) \
    if ((a) != (b)) { \
        cerr << "ASSERT_EQ failed: " #a " != " #b << endl; \
        exit(1); \
    }
