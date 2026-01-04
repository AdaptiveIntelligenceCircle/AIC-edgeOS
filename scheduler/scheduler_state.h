#pragma once 
#include <unordered_map>

#include <string> 
#include "scheduler_type.h"

using namespace std; 
namespace aic :: scheduler
{
    // Trang thai noi bo cua scheduler.. 
    // Co the snapshot de phuc vu rollback / audit.. 

    struct TaskRuntimeState
    {
        TaskStatus status = TaskStatus :: IDLE; 
        TimePoint last_executed{}; 
        int failure_count  = 0; 
    }; 

    struct SchedulerState
    {
        unordered_map<string, TaskRuntimeState> task_states; 
    }; 
} // namespace aic :: scheduler;; 