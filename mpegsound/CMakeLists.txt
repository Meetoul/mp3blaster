cmake_minimum_required(VERSION 3.9)

project(MpegSound)

file(GLOB MPEG_SOURCE "./*.cc")
file(GLOB MPEG_HEADER "./*.h")

include_directories(${COMMON_INCLUDE_DIR})

add_library(libmpegsound STATIC ${MPEG_SOURCE} ${MPEG_HEADER})
