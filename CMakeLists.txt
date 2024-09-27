cmake_minimum_required(VERSION 3.10)

project(shriek CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(dep/libpsxav EXCLUDE_FROM_ALL)
find_package(FFMPEG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(Qt6 COMPONENTS Widgets CONFIG REQUIRED)

add_executable(shriek src/main.cc)

target_include_directories(shriek PRIVATE ${FFMPEG_INCLUDE_DIRS})
target_link_directories(shriek PRIVATE ${FFMPEG_LIBRARY_DIRS})
target_link_libraries(shriek PRIVATE Qt6::Widgets libpsxav fmt::fmt ${FFMPEG_LIBRARIES})