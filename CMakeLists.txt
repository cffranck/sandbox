cmake_minimum_required(VERSION 3.23)

project(Sandbox)

add_executable(helloworld)

target_sources(helloworld PRIVATE source/main.cpp)
