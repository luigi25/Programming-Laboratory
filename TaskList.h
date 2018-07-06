//
// Created by luigi on 21/06/18.
//

#ifndef LABPROG_TASKLIST_H
#define LABPROG_TASKLIST_H

#include <string>
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


private:
    std::string nameList;
    int numbList;
};


#endif //LABPROG_TASKLIST_H
