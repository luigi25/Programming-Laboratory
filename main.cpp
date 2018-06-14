#include <iostream>
#include <map>
#include "Date.h"
#include "TaskList.h"

int main() {
    Date dateFirstTask(20, Months::July, 2018);
    Date dateSecondTask(22, Months::July, 2018);
    Date dateThirdTask(27, Months::July, 2018);
    Date dateFourthTask(3, Months::August, 2018);
    Date dateFifthTask(15, Months::September, 2018);
    TaskList taskN1("Fai la spesa", dateFirstTask, true);
    TaskList taskN2("Paga le bollette", dateSecondTask, true);
    TaskList taskN3("Passa dalla banca", dateThirdTask, false);
    TaskList taskN4("Fissare le vacanze con amici", dateFourthTask, true);
    TaskList taskN5("Andare a vivere da solo", dateFifthTask, false);

    std::map<Date, TaskList> myAgenda;

}