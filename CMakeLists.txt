cmake_minimum_required(VERSION 3.16)
project(SteamVitaPublic LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SteamVitaPublic
    src/main.cpp
    src/runtime_bridge.cpp
)

target_include_directories(SteamVitaPublic PRIVATE src)
