//
// Created by luigi on 13/07/18.
//

#include <gtest/gtest.h>
#include "../Date.h"
#include "../TaskList.h"


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
        Date d(31,July,2018);
        FAIL() <<"Expected runtime_error";
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

TEST(TaskList, Constructor) {
    TaskList t("nameTask", 1);
    ASSERT_EQ("nameTask", t.getNameList());
    ASSERT_EQ(1, t.getNumbList());
}

TEST(TaskList, AddTasks){
    Date d1(20, Months::July, 2018);
    Task myTask("FirstTask",1,d1,false);
    TaskList t("nameTask", 1);
    t.addTask(myTask);
}

TEST(TaskList, RemoveTasks){
    Date d2(20, Months::February, 2024);
    Task myTask("FirstTask",12,d2,true);
    TaskList t("nameTask", 12);
    t.addTask(myTask);
    t.removeTask(12);
}