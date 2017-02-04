cmake_minimum_required(VERSION 3.6)
project(Assn2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Analyst.cpp Analyst.hpp Transaction.cpp Transaction.hpp Utils.cpp Utils.h Comparer.cpp Comparer.h Constants.h FormattedTable.cpp FormattedTable.hpp)
add_executable(Assn2 ${SOURCE_FILES})