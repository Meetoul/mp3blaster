cmake_minimum_required(VERSION 3.9)

project(NMixer)

file(GLOB MIXER_SOURCE "./*.cc")
file(GLOB MIXER_HEADER "./*.h")

include_directories(${COMMON_INCLUDE_DIR})

add_library(libnmixer STATIC ${MIXER_SOURCE} ${MIXER_HEADER})
