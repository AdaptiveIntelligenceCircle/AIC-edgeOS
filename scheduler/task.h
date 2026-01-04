#pragma once 
#include <iostream> 
using namespace std ; 

#include <functional>
#include "scheduler_type.h"
#include <string> 

namespace aic :: scheduler
{
    // task la don vi hanh vi co ngu nghia 
    // Khong phai thread. Khong phai process.. 

    class Task
    {
        public: 
        Task(string id, 
        TaskPriority priority, 
        Duration interval, 
        function<void()> callback); 

        const string &id() const; 
        TaskPriority priority() const; 
        Duration interval() const; 

        void execute(); 

        private: 
        string id_; 
        TaskPriority priority_; 
        Duration interval_; 
        function<void()> callback_; 
    }; 
} // namespace aic :: scheduler.. 