cmake_minimum_required(VERSION 3.10)

# Project Name
project(RockPaperScissors)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
add_executable(RockPaperScissors 
    main.cpp 
    game_logic.cpp 
    utils.cpp
)

# Include directories
include_directories(${CMAKE_SOURCE_DIR})
