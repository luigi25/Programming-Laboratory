//
// Created by luigi on 08/07/18.
//

#include <gtest/gtest.h>
#include "../../Date.h"


TEST(Date, Constructor){
    Date d(1,January,2018);
    ASSERT_EQ(1,d.getDay());
    ASSERT_EQ(January,d.getMonth());
    ASSERT_EQ(2018,d.getYear());
}


TEST(Date,ExceptionsThrow){
    try{
        Date d(345,May,2019);
        FAIL() <<"Expected runtime_error";
    }catch(std::runtime_error const &e){
        EXPECT_EQ(e.what(),std::string("Day incorrect"));
    }
    try{
        Date d(6,July,2018);
    }catch(std::runtime_error const &e){
        EXPECT_EQ(e.what(),std::string("Month incorrect"));
    }
    try{
        Date d(27,September,2009);
        FAIL() <<"Expected runtime_error";
    }catch(std::runtime_error const &e){
        EXPECT_EQ(e.what(),std::string("Year incorrect"));
    }
}