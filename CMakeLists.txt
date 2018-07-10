include_directories(${gtest_SOURCE_DIR}/include${gtest_SOURCE_DIR})
add_executable(unitTesting DateTests.cpp)
target_link_libraries(unitTesting gtest gtest_main)