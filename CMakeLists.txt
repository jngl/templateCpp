cmake_minimum_required(VERSION 3.12)
project(Cyber)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(third_party)
add_subdirectory(libCyber)
add_subdirectory(appCyber)
add_subdirectory(test)
