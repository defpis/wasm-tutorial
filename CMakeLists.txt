cmake_minimum_required(VERSION 3.27)

project(wasm-tutorial)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hello hello.cpp)

set(CMAKE_BUILD_TYPE Debug)
set_target_properties(hello PROPERTIES LINK_FLAGS "-g3 -l embind -s EXPORT_ES6 -s MODULARIZE --pre-js ${CMAKE_SOURCE_DIR}/util/pre.js --post-js ${CMAKE_SOURCE_DIR}/util/post.js")
