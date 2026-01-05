#pragma once 
using namespace std; 

namespace aic :: trust
{
    // TrustResult Khong ra lenh.. 
    // No mo ta gioi han.. 

    enum class TrustConstraint
    {
        NONE, // Khong Han che..
        SOFT_LIMIT,  // Giam tan suat 
        HARD_LIMIT,  // chi cho phep task critical 
        BLOCK // KHong cho chay
    }; 

    struct TrustResult
    {
        TrustConstraint constraint; 
        double confidence ; 
    }; 
}