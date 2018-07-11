#include <iostream>
#include "Date.h"
#include "Task.h"
#include "TaskList.h"
#include <vector>
#include <string>
#include <stdexcept>


int main() {
    char command;
    int day,month, year;
    int list;
    int i=1;
    bool finish=false;
    std::string target, mylist;
    Date tempDate;
    TaskList myAgenda("MustToDo",1);
    std::vector<TaskList> lists;

    tempDate = Date(20, Months::July, 2018);
    Task taskN1("You must buy the bread!", tempDate,true);
    myAgenda.push_back(taskN1);

    tempDate = Date(22, Months::July, 2018);
    taskN1 = Task("You must pay the bill!", tempDate, true);
    myAgenda.push_back(taskN1);

    tempDate = Date(27, Months::July, 2018);
    taskN1 = Task("You must go to the bank!", tempDate,false);
    myAgenda.push_back(taskN1);
    lists.push_back(myAgenda);

    while (!finish) {
        std::cout<<"Insert command:"<<std::endl;
        std::cout<<"l->Insert new list"<<std::endl;
        std::cout<<"w->Insert new task"<<std::endl;
        std::cout<<"r->Read your tasks"<<std::endl;
        std::cout<<"q->Quit"<<std::endl;
        std::cin>>command;
        if(std::cin){
            switch(command){
                case'l':
                    std::cout<<"Insert list name"<<std::endl;
                    std::cin>>mylist;
                    std::cout<<"Insert list number"<<std::endl;
                    std::cin>>list;
                    if(list == 1){
                        std::cerr<<"Error! List already exist."<<std::endl;
                        break;
                    } else if(list<=0){
                        std::cerr<<"Incorrect number"<<std::endl;
                        break;
                    }
                    myAgenda=TaskList(mylist, list);
                    lists.push_back(myAgenda);
                    break;
                case 'w':
                    std::cout<<"Choose list"<<std::endl;
                    std::cin>>list;
                    std::cout<<"Insert target:"<<std::endl;
                    std::cin>>target;
                    std::cout<<"Insert day:"<<std::endl;
                    std::cin>>day;
                    std::cout<<"Insert month:"<<std::endl;
                    std::cin>>month;
                    std::cout<<"Insert year:"<<std::endl;
                    std::cin>>year;
                    tempDate=Date(day,(Months)(month-1),year);
                    taskN1=Task(target,tempDate,false);
                    for(auto it=lists.begin(); it!=lists.end(); it++){
                        if(it->getNumbList()==list){
                            it->push_back(taskN1);
                            break;
                        }
                    }
                    break;
                case 'r':
                    std::cout<<" What list?"<<std::endl;
                    std::cin>>list;
                    for(auto it=lists.begin(); it!=lists.end(); it++) {
                        if (list ==it->getNumbList()) {
                            myAgenda.printTaskList();
                            for (auto itr = it->getAgenda().begin(); itr != it->getAgenda().end(); itr++) {
                                std::cout << "Task:" << i << std::endl;
                                itr->printTask();
                                i++;
                            }
                        }
                    }
                    break;
                case 'q':
                    finish=true;
                    break;
                default:
                    std::cout<<"Invalid command "<<std::endl;
                    break;
            }
        }
    }
}