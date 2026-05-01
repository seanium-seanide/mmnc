qt_add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
  main.cpp
  MainWindow.cpp
  ${MMNC_INCLUDE_DIR}/MainWindow.hpp
  ${MMNC_UI_DIR}/MainWindow.ui
)

qt_add_ui(${PROJECT_NAME}
  SOURCES ${MMNC_UI_DIR}/MainWindow.ui
)

target_include_directories(${PROJECT_NAME} PRIVATE
  ${MMNC_INCLUDE_DIR}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
  Qt6::Core
  Qt6::Gui
  Qt6::Widgets
)
