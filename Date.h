//
// Created by luigi on 12/06/18.
//

#ifndef LABPROG_DATE_H
#define LABPROG_DATE_H

#include <iostream>

enum Months {
    January, February, March, April, May, June, July, August, September, October, November, December
};

class Date {
public:
    explicit Date(int d=1, Months m=Months::January, int y=2018);
    void setDay(int day);
    int getDay() const;
    void setMonth(Months month);
    Months getMonth() const;
    void setYear(int year);
    int getYear() const;
    int getMaxNumDays();
    void printDate();

private:
    int day,year;
    Months month;
};


#endif //LABPROG_DATE_H
