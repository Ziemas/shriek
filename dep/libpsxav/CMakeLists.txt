cmake_minimum_required(VERSION 3.10)
project (libpsxav)
add_library (libpsxav adpcm.c cdrom.c)
target_include_directories(libpsxav PUBLIC ./)
