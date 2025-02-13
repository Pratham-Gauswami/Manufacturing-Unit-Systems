cmake_minimum_required(VERSION 3.14)
project(ManufacturingUnitSystems)

set(CMAKE_CXX_STANDARD 17)

# Find Qt packages
find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

# Enable AUTOMOC for Qt classes
set(CMAKE_AUTOMOC ON)

# Add executable
add_executable(ManufacturingUnitSystems
    main.cpp
    simulation.cpp
    uI.cpp
    component.cpp
)

# Link Qt libraries
target_link_libraries(ManufacturingUnitSystems
    Qt6::Core
    Qt6::Widgets
)