//
// Created by luigi on 10/07/18.
//

#ifndef LABPROG_TASKLIST_H
#define LABPROG_TASKLIST_H

#include <string>
#include <vector>
#include "Task.h"

class TaskList {
public:
    TaskList(std::string nameList, int numbList) : nameList(nameList), numbList(numbList){};

    const std::string &getNameList() const {
        return nameList;
    }

    void setNameList(const std::string &nameList) {
        TaskList::nameList = nameList;
    }

    int getNumbList() const {
        return numbList;
    }

    void setNumbList(int numbList) {
        TaskList::numbList = numbList;
    }
    void push_back(const Task&);

    const std::vector<Task> &getAgenda() const;


private:
    std::string nameList;
    int numbList;
    std::vector<Task> agenda;

};
#endif //LABPROG_TASKLIST_H
