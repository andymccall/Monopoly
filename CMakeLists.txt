cmake_minimum_required(VERSION 3.13)
project(Monopoly)

set(CMAKE_CXX_STANDARD 14)

# add extra include directories
include_directories(Headers)

add_executable(Monopoly main.cpp Headers/pch.h
        Sources/Token.cpp
        Sources/Square.cpp
        Sources/Special.cpp
        Sources/Property.cpp
        Sources/Player.cpp
        Sources/Board.cpp Headers/Board.h Headers/Constants.h Sources/Game.cpp Headers/Game.h)