cmake_minimum_required(VERSION 3.23)

project(Sandbox)

add_executable(helloworld)

target_sources(helloworld PRIVATE source/main.cpp source/myfun.cpp)
target_include_directories(helloworld PRIVATE include/)

add_executable(test_myfun)
target_sources(test_myfun PRIVATE tests/test_myfun.cpp source/myfun.cpp)
target_include_directories(test_myfun PRIVATE include/)

