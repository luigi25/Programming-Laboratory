//
// Created by luigi on 10/07/18.
//

#ifndef LABPROG_TASK_H
#define LABPROG_TASK_H



#include <string>
#include "Date.h"

class Task {
public:
    explicit Task(std::string whatTask, Date date=Date(), bool taskDone=false);
    Date readDueDate();
    void printTask() const;


private:
    std::string nameTask;
    bool taskComplete;
    Date dueDate;


};
#endif //LABPROG_TASK_H
