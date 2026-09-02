cmake_minimum_required(VERSION 3.15)

project(ThePankeyEngine_System_Hardware_Windows)

if(NOT TARGET ThePankeyEngine_System_Hardware_Windows)

    add_library(ThePankeyEngine_System_Hardware_Windows INTERFACE)

    target_include_directories(
        ThePankeyEngine_System_Hardware_Windows
        INTERFACE
            ${CMAKE_CURRENT_SOURCE_DIR}
    )

endif()
