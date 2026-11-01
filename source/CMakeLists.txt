# TODO: Use source groups

set(MMNC_SOURCE_FILES
  main.cpp
  Material.cpp
  MainWindow.cpp
  AddMaterialDialog.cpp
)

set(MMNC_HEADER_FILES
  ${MMNC_INCLUDE_DIR}/MainWindow.hpp
  ${MMNC_INCLUDE_DIR}/AddMaterialDialog.hpp
)

set(MMNC_UI_FILES
  ${MMNC_UI_DIR}/MainWindow.ui
  ${MMNC_UI_DIR}/AddMaterialDialog.ui
)


set(MMNC_EXECUTABLE_NAME ${PROJECT_NAME})
qt_add_executable(${MMNC_EXECUTABLE_NAME})

target_sources(${MMNC_EXECUTABLE_NAME}
  PRIVATE
    ${MMNC_SOURCE_FILES}

  PUBLIC FILE_SET HEADERS
    BASE_DIRS
      ${MMNC_INCLUDE_DIR}
    FILES
      ${MMNC_HEADER_FILES}
)

qt_add_ui(${MMNC_EXECUTABLE_NAME}
  SOURCES
    ${MMNC_UI_FILES}
)

target_link_libraries(${MMNC_EXECUTABLE_NAME} PRIVATE
  Qt6::Core
  Qt6::Gui
  Qt6::Widgets
)
