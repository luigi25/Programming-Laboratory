//
// Created by luigi on 10/07/18.
//
#include "TaskList.h"

void TaskList::push_back(const Task &el) {
    this->agenda.push_back(el);
}

const std::vector<Task> &TaskList::getAgenda() const {
    return agenda;
}
