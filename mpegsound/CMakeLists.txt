cmake_minimum_required(VERSION 3.9)

project(MpegSound)

file(GLOB MPEG_SOURCE "./*.cc")

include_directories(${COMMON_INCLUDE_DIR})

add_library(libmpegsound STATIC ${MPEG_SOURCE})
