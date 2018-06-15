//
// Created by luigi on 12/06/18.
//

#ifndef LABPROG_TASKLIST_H
#define LABPROG_TASKLIST_H

#include <string>
#include "Date.h"

class TaskList {
public:
    explicit TaskList(std::string whatTask, Date date=Date(), bool taskDone=false);
    Date readDueDate();
    void printTask();


private:
    std::string nameTask;
    bool taskComplete;
    Date dueDate;


};


#endif //LABPROG_TASKLIST_H
