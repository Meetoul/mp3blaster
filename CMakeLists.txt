cmake_minimum_required(VERSION 3.9)

project(Mp3Blaster)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -W -fno-strength-reduce -std=c++11 -Wno-narrowing")
add_definitions(-DHAVE_CONFIG_H)

set(COMMON_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB BLASTER_SOURCE "src/*.cc")
file(GLOB BLASTER_HEADER "src/*h")

find_package(Curses REQUIRED)
find_package(Threads REQUIRED)
find_package(SDL REQUIRED)

include_directories(
    ${COMMON_INCLUDE_DIR}
    mpegsound
    nmixer
    ${CURSES_INCLUDE_DIR}
    ${SDL_INCLUDE_DIR}
)

add_executable(mp3blaster ${BLASTER_SOURCE} ${BLASTER_HEADER})

target_link_libraries(mp3blaster
    libmpegsound
    libnmixer
    ${CURSES_LIBRARIES}
    Threads::Threads
    ${SDL_LIBRARY}
)

add_subdirectory(nmixer)
add_subdirectory(mpegsound)
