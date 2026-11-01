cmake_minimum_required(VERSION 3.25...4.2)
project(mmnc VERSION 1.0.0 LANGUAGES CXX)

set(MMNC_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(MMNC_SOURCE_DIR ${CMAKE_SOURCE_DIR}/source)
set(MMNC_UI_DIR ${CMAKE_SOURCE_DIR}/ui)
set(MMNC_TEST_DIR ${CMAKE_SOURCE_DIR}/test)

find_package(Qt6 REQUIRED
  COMPONENTS
    Core
    Gui
    Widgets
)

qt_standard_project_setup()

add_subdirectory(source)

option(BUILD_TESTS "Build unit tests" ON)
if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(test)
endif()
