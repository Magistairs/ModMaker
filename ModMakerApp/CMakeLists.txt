cmake_minimum_required(VERSION 3.10)
project(ModMakerApp VERSION 1.0.0)

set(Qt6_DIR "C:/Qt/6.6.0/msvc2019_64/lib/cmake/Qt6")

find_package(Qt6 REQUIRED COMPONENTS Core Gui Test Widgets)

set(CMAKE_AUTOMOC ON)

file(GLOB_RECURSE MODMAKERAPP_SRC "src/*.cpp")
file(GLOB_RECURSE MODMAKERAPP_INCLUDE "include/*.h")

add_executable(ModMakerApp ${MODMAKERAPP_SRC} ${MODMAKERAPP_INCLUDE})

target_include_directories(ModMakerApp PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(ModMakerApp PRIVATE RCLib Qt6::Core Qt6::Gui Qt6::Test Qt6::Widgets qtadvanceddocking-qt6)

set_target_properties(ModMakerApp PROPERTIES
    VERSION ${PROJECT_VERSION}
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
