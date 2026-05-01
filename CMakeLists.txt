cmake_minimum_required(VERSION 3.25...4.2)
project(mmnc)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(MMNC_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(MMNC_SOURCE_DIR ${CMAKE_SOURCE_DIR}/source)
set(MMNC_UI_DIR ${CMAKE_SOURCE_DIR}/ui)
set(MMNC_TEST_DIR ${CMAKE_SOURCE_DIR}/test)


find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)


qt_standard_project_setup()


add_subdirectory(source)
add_subdirectory(test)
