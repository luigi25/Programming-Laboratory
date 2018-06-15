//
// Created by luigi on 12/06/18.
//

#include "Date.h"

Date::Date(int d, Months m, int y) : day(d), month(m), year(y) {
    if(day<=0||day>getMaxNumDays())
        day=1;
}

void Date::setDay(int day) {
    if(day<=0||day>getMaxNumDays())
        day=1;
    Date::day=day;
}

int Date::getDay() const {
    return day;
}

void Date::setMonth(Months month) {
    Date::month=month;
}

Months Date::getMonth() const {
    return month;
}

void Date::setYear(int year) {
    Date::year=year;
}

int Date::getYear() const {
    return year;
}

int Date::getMaxNumDays() {
    switch (month) {
        case Months::January:
            return 31;
        case Months::March:
            return 31;
        case Months::April:
            return 30;
        case Months::May:
            return 31;
        case Months::June:
            return 30;
        case Months::July:
            return 31;
        case Months::August:
            return 31;
        case Months::September:
            return 30;
        case Months::October:
            return 31;
        case Months::November:
            return 30;
        case Months::December:
            return 31;
        default:
            return 28;
    }
}

void Date::printDate() {
    std::cout<<this->day<<'/'<<this->month + 1<<'/'<<this->year;
}