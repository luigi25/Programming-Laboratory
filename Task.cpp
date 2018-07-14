//
// Created by luigi on 12/06/18.
//

#include "Task.h"

Date Task::readDueDate() {
    return this->dueDate;
}

void Task::printTask() const {
    std::cout<<"Target:"<<this->nameTask<<std::endl;
    std::cout<<"Number task:"<<this->numbTask<<std::endl;
    std::cout<<"Expire date:"; this->dueDate.printDate(); std::cout<<std::endl;
    std::cout<<"Completed:";
    if(taskComplete)
        std::cout<<"Yes";
    else
        std::cout<<"No";
    std::cout<<std::endl;
}