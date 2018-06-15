#include <iostream>
#include "Date.h"
#include "TaskList.h"
#include <vector>
#include <string>


int main() {
    char command;
    int day,month, year;
    std::string target;
    Date dateFirstTask(20, Months::July, 2018);
    Date dateSecondTask(22, Months::July, 2018);
    Date dateThirdTask(27, Months::July, 2018);
    TaskList taskN1("Fai la spesa", dateFirstTask, true);
    TaskList taskN2("Paga le bollette", dateSecondTask, true);
    TaskList taskN3("Passa dalla banca", dateThirdTask, false);
    std::vector<TaskList> myAgenda;
    myAgenda.push_back(taskN1);
    myAgenda.push_back(taskN2);
    myAgenda.push_back(taskN3);

    std::cout<<"Insert command:"<<std::endl;
    std::cout<<"w->Insert new task"<<std::endl;
    std::cout<<"r->Read your tasks"<<std::endl;
    std::cin>>command;
    if(std::cin){
        switch(command){
            case 'w':
                std::cout<<"Insert target:"<<std::endl;
                std::cin>>target;
                std::cout<<"Insert day:"<<std::endl;
                std::cin>>day;
                std::cout<<"Insert month:"<<std::endl;
                std::cin>>month;
                std::cout<<"Insert year:"<<std::endl;
                std::cin>>year;

                break;
            case 'r':
                int i=0;
                for(std::vector<TaskList>::iterator it=myAgenda.begin(); it!=myAgenda.end(); it++ ){
                    std::cout<<"Task:"<<i<<std::endl;
                    it->printTask();
                }


                break;
            default:
                std::cout<<"Invalid command "<<std::endl;
                break;
        }
    }




}