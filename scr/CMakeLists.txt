cmake_minimum_required (VERSION 2.8)
project (PierwszyProgram)
add_executable(Laborka main.cpp)
option (USE_TRIGONOMETRY_DEGREE
"Czy argumentami funkcji trygonometrycznych maja byc stopnie" ON)
if (USE_TRIGONOMETRY_DEGREE)
include_directories ("${PROJECT_SOURCE_DIR}/Trygonometria")
add_subdirectory(Trygonometria)
target_link_libraries (Laborka Trygonometria)
endif (USE_TRIGONOMETRY_DEGREE)
option (BUILD_TESTS
"Czy testy maja byc budowane" ON)
if (BUILD_TESTS)
enable_testing()
add_test(LaborkaBuild Laborka 45)
add_test(Laborka2sek Laborka)
set_tests_properties(Laborka2sek PROPERTIES TIMEOUT 2)
add_test (LaborkaWynik Laborka 1)
set_tests_properties (LaborkaWynik
PROPERTIES PASS_REGULAR_EXPRESSION "1")
endif (BUILD_TESTS)
configure_file (
"${PROJECT_SOURCE_DIR}/LaborkaConfig.h.in"
"${PROJECT_BINARY_DIR}/LaborkaConfig.h"
)
include_directories("${PROJECT_BINARY_DIR}")


