find_package(Qt6 REQUIRED COMPONENTS Test)

set(QT_UNIT_TESTS_NAME qt_unit_tests)

qt_add_executable(${QT_UNIT_TESTS_NAME})

target_sources(${QT_UNIT_TESTS_NAME} PRIVATE
  ${QT_UNIT_TESTS_NAME}.cpp
)

target_include_directories(${QT_UNIT_TESTS_NAME} PRIVATE
  ${MMNC_INCLUDE_DIR}
)

target_link_libraries(${QT_UNIT_TESTS_NAME} PRIVATE
  Qt6::Test
)

enable_testing()
add_test(NAME qt_unit_tests COMMAND qt_unit_tests)
