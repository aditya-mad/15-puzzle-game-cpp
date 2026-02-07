cmake_minimum_required(VERSION 3.10)
project(PuzzleGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(game 
    main.cpp
    src/game.cpp
    src/input_taker.cpp
    src/menu.cpp
    src/renderer.cpp
)

target_include_directories(game PRIVATE ${CMAKE_SOURCE_DIR}/include)
