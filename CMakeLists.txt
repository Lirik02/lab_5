cmake_minimum_required(VERSION 3.20)
project(qt_lab3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(qt_lab5 main.cpp MainWindow.cpp MainWindow.h)

target_link_libraries(qt_lab5 Qt::Core Qt::Gui Qt::Widgets)