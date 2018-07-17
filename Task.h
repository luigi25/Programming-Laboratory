//
// Created by luigi on 10/07/18.
//

#ifndef LABPROG_TASK_H
#define LABPROG_TASK_H

#include <string>
#include "Date.h"

class Task {
public:
    Task(std::string whatTask,int numbTask, Date date ,bool taskDone) : nameTask(whatTask),numbTask(numbTask), dueDate(date),taskComplete(taskDone) {};
    Date readDueDate();
    void printTask() const;

    int getNumbTask() const {
        return numbTask;
    }


private:
    std::string nameTask;
    int numbTask;
    bool taskComplete;
    Date dueDate;

};
#endif //LABPROG_TASK_H
