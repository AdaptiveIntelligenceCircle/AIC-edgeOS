#pragma once 
#include <chrono> 

#include <string> 
using namespace std; 

namespace aic :: scheduler
{
    using TimePoint = chrono :: steady_clock :: time_point; 
    using Duration = chrono :: milliseconds; 

    enum class TaskPriority
    {
        LOW = 0, 
        NORMAL, 
        HIGH, 
        CRITICAL
    }; 

    enum class ScheduleDecision
    {
        EXECUTE_NOW, 
        DELAY, 
        SKIP, 
        ABORT
    }; 

    enum class TaskStatus
    {
        IDLE, 
        RUNNING, 
        BLOCKED, 
        FAILED, 
        DISABLED
    }; 
} // namespace aic :: scheduler.. 