//
// Created by luigi on 10/07/18.
//
#include "TaskList.h"

void TaskList::addTask(Task t) {
    agenda.push_back(t);
}

void TaskList::removeTask(int i) {
    auto it = agenda.begin() + i;
        agenda.erase(it);
    }


const std::vector<Task> &TaskList::getAgenda() {
    return agenda;
}

void TaskList::printTaskList() const {
    std::cout<<"Name List:"<<this->nameList<<std::endl;
    std::cout<<"Number List:"<<this->numbList<<std::endl;
}
