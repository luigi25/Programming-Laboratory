//
// Created by luigi on 12/06/18.
//

#include "TaskList.h"

TaskList::TaskList(std::string whatTask, Date date, bool taskDone) : nameTask(whatTask), dueDate(date), taskComplete(taskDone) {
}

Date TaskList::readDueDate() {
    return this->dueDate;
}

void TaskList::printTask() {
    std::cout<<"Target:"<<this->nameTask<<std::endl;
    std::cout<<"Expire date:"; this->dueDate.printDate(); std::cout<<std::endl;
    std::cout<<"Completed:"<<this->taskComplete?"Yes":"No"<<std::endl<<std::endl;
}