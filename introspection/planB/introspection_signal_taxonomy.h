#pragma once 
#include <cstdint>

using namespace std; 
#include <iostream>

namespace aic :: introspection
{
    enum class SystemSignalType : uint8_t 
    {
        STATE_DRIFT, 
        EXECUTION_LOOP_STALL, 
        UNEXPECTED_RESTART, 
        TIME_DESYNC
    }; 

    enum class BehaviorSignalType : uint8_t
    {
        POLICY_CONFLICT,
        BEHAVIOR_AMPLIFICATION, 
        UNPLANNED_PATTERN, 
        SELF_REINFORCMENT 
    }; 

    enum class SecuritySignalType : uint8_t 
    {
        INTRUSION_ATTEMPT, 
        TRUST_VIOLATION, 
        SANDBOX_ESCAPE, 
        INTERGRITY_BREACH
    }; 

    enum class ResourceSignalType : uint8_t 
    {
        CPU_STRIKE, 
        MEMORY_LEAK_PATTERN, 
        IO_SATURATION, 
        PRIORITY_INVERSION
    };

    enum class AuthoritySignalType : uint8_t
    {
        PRIVILEGE_ESCALATION_ATTEMPT,
        UNAUTHORIZED_SCOPE_EXPANSION, 
        DECISION_OVERRIDE_PATTERN, 
        AUTONOMY_BOUNDARY_CROSS
    };
} // namespace aic :: introspection