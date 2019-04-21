cmake_minimum_required(VERSION 3.7)
project(TareaCorta)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDARD 11)


set(SOURCE_FILES

        main.cpp
        tests.cpp

        dataStructures/queue/queue.cpp
        dataStructures/queue/queueItem.cpp

        productionLine/vehicles.cpp
        productionLine/factoryProcesses/processes.cpp
        productionLine/factoryProcesses/processManager.cpp
        )

add_executable(TareaCorta ${SOURCE_FILES})

target_link_libraries(TareaCorta ${CMAKE_THREAD_LIBS_INIT})