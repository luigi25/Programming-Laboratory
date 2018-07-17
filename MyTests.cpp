//
// Created by luigi on 17/07/18.
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
    }catch (std::runtime_error &e) {
        ASSERT_THROW(e.what(), std::runtime_error);
    }
    try{
        Date d1(29,February,2031);
    }catch (std::runtime_error &e) {
        ASSERT_THROW(e.what(), std::runtime_error);
    }
    try{
        Date d2(27,December,2009);
    }catch (std::runtime_error &e) {
        ASSERT_THROW(e.what(), std::runtime_error);
    }
}

TEST(TaskList, Constructor) {
    TaskList t("nameTask", 1);
    ASSERT_EQ("nameTask", t.getNameList());
    ASSERT_EQ(1, t.getNumbList());
}

TEST(TaskList, AddTasks){
    Date d1(20,July, 2018);
    Date d2(1,September,2020);
    Task myTask("FirstTask",1,d1,false);
    Task task2("SecondTask",2,d2,true);
    TaskList t("nameTask", 1);
    t.addTask(myTask);
    ASSERT_EQ(1, myTask.getNumbTask());
    t.addTask(task2);
    ASSERT_EQ(2, task2.getNumbTask());
}

TEST(TaskList, RemoveTasks){
    Date d3(20, February, 2024);
    Task myTask("importantTask",0,d3,true);
    Task goodTask("newTask",1,d3,false);
    Task testTask("newTask",2,d3,true);
    TaskList t("nameTask", 45);
    t.addTask(myTask);
    t.removeTask(0);
    ASSERT_EQ(0, myTask.getNumbTask());
    t.addTask(myTask);
    t.addTask(testTask);
    ASSERT_EQ(2,testTask.getNumbTask());
    t.removeTask(0);
    t.removeTask(2);
    t.addTask(goodTask);
    t.removeTask(4567);
    ASSERT_EQ(1,goodTask.getNumbTask());
}