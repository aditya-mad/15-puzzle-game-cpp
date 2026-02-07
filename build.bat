@echo off
setlocal enabledelayedexpansion

set CXX=g++
set CXXFLAGS=-I.\include -std=c++17
set SOURCES=main.cpp src\game.cpp src\input_taker.cpp src\menu.cpp src\renderer.cpp
set OUTPUT=game.exe

echo Compiling %OUTPUT%...
%CXX% %CXXFLAGS% %SOURCES% -o %OUTPUT%

if errorlevel 1 (
    echo Compilation failed!
    exit /b 1
) else (
    echo Compilation successful! Output: %OUTPUT%
    exit /b 0
)
