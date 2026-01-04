#include "task.h"
using namespace std; 

namespace aic :: scheduler
{
    Task :: Task(string id, 
    TaskPriority priority, 
    Duration interval, 
    function<void()> callback)
    : id_(move(id)), 
    priority_(priority), 
    interval_(interval), 
    callback_(move(callback)){}

    const string &Task ::id() const
    {
        return id_; 
    }

    TaskPriority Task :: priority() const
    {
        return priority_; 
    }

    Duration Task :: interval() const 
    {
        return interval_; 
    }

    void Task :: execute()
    {
        if (callback_)
        callback_(); 
    }
}