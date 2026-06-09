# TODO: Import libfmt via FetchContent
# TODO: Use source groups

find_package(fmt)

set(SOURCE_FILES
  main.cpp
  Material.cpp
)

set(QT_SOURCE_FILES
  MainWindow.cpp
  AddMaterialDialog.cpp
)

set(QT_HEADER_FILES
  ${MMNC_INCLUDE_DIR}/MainWindow.hpp
  ${MMNC_INCLUDE_DIR}/AddMaterialDialog.hpp
)

set(QT_UI_FILES
  ${MMNC_UI_DIR}/MainWindow.ui
  ${MMNC_UI_DIR}/AddMaterialDialog.ui
)


qt_add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
  ${SOURCE_FILES}
  ${QT_SOURCE_FILES}
  ${QT_HEADER_FILES}
  ${QT_UI_FILES}
)

qt_add_ui(${PROJECT_NAME}
  SOURCES
    ${MMNC_UI_DIR}/MainWindow.ui
    ${MMNC_UI_DIR}/AddMaterialDialog.ui
)

target_include_directories(${PROJECT_NAME} PRIVATE
  ${MMNC_INCLUDE_DIR}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
  Qt6::Core
  Qt6::Gui
  Qt6::Widgets
  fmt::fmt
)
