cmake_minimum_required(VERSION 3.10)

project(shriek)

add_subdirectory(dep/libpsxav EXCLUDE_FROM_ALL)
find_package(FFMPEG REQUIRED)
find_package(fmt CONFIG REQUIRED)

add_executable(shriek src/main.cc)

target_include_directories(shriek PRIVATE ${FFMPEG_INCLUDE_DIRS})
target_link_directories(shriek PRIVATE ${FFMPEG_LIBRARY_DIRS})
target_link_libraries(shriek PRIVATE libpsxav fmt::fmt ${FFMPEG_LIBRARIES})