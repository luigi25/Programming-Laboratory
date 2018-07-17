//
// Created by luigi on 12/06/18.
//

#include "Date.h"

Date::Date(int d, Months m, int y) : day(d), month(m), year(y) {}

void Date::setDay(int day) {
    if(!test())
        throw std::runtime_error("Insert correct Day!");
    Date::day=day;
}

int Date::getDay() const {
    return day;
}

void Date::setMonth(Months month) {
    if(!test())
        throw std::runtime_error("Insert correct Month!");
    Date::month=month;
}

Months Date::getMonth() const {;
    return month;
}

void Date::setYear(int year) {
    if(!test())
        throw std::runtime_error("Insert correct Year!");
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
            if (!(year % 4))
                return 29;
            else
                return 28;
    }
}


void Date::controlDay() noexcept(false) {
    if (day<1 || day>getMaxNumDays())
        throw std::runtime_error("Insert correct Day!");
}

void Date::controlMonth() noexcept(false){
    if(month<0 || month>11)
        throw std::runtime_error("Insert correct Month!");
}

void Date::controlYear() noexcept(false){
    if(year<2018)
        throw std::runtime_error("Insert correct Year!");
}

void Date::printDate() const {
    std::cout<<this->day<<'/'<<this->month + 1<<'/'<<this->year;
}

bool Date::test() {
    try {
        controlDay();
        controlMonth();
        controlYear();
    } catch (std::runtime_error &e1) {
        std::cerr << e1.what() << std::endl;
        return false;
    }catch (std::runtime_error &e2) {
        std::cerr<<e2.what()<< std::endl;
        return false;
    }catch (std::runtime_error &e3){
        std::cerr<<e3.what()<<std::endl;
        return false;
    }
    return true;
}