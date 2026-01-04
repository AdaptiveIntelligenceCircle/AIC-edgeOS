#pragma once 
#include <string> 

using namespace std; 

enum class TrustLevel
{
    UNKNOWN = 0,
    LOW, 
    MEDIUM, 
    HIGH, 
    ROOT 
}; 

enum class TrustDecision
{
    ALLOW, 
    LIMIT, 
    MONITOR, 
    DENY
};

enum class EvidenceType
{
    BEHAVIOR, 
    CONTEXT, 
    HISTORY, 
    EXTERNAL_SIGNAL
}; 