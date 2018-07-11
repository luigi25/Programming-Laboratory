//
// Created by luigi on 10/07/18.
//
#include "TaskList.h"

void TaskList::push_back(const Task &el) {
    this->agenda.push_back(el);
}

const std::vector<Task> &TaskList::getAgenda() {
    return agenda;
}

void TaskList::printTaskList() const {
    std::cout<<"Name List:"<<this->nameList<<std::endl;
    std::cout<<"Number List:"<<this->numbList<<std::endl;
}


