cmake_minimum_required(VERSION 3.23)
project(geometry LANGUAGES CXX)

# Do not use this in production as reveals all symbols
if (MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

add_library(geo SHARED)
add_library(geometry::geo ALIAS geo) 

# Source files are only for geo itself
target_include_directories(geo PRIVATE "${PROJECT_SOURCE_DIR}/src")

# public headers are used by internal files and external projects
target_include_directories(geo PUBLIC "${PROJECT_SOURCE_DIR}/include/")
add_subdirectory("src")
add_subdirectory("include/geometry")
add_executable(app)
target_sources(app PRIVATE "example/app.cpp")
target_link_libraries(app PRIVATE geo)

install(TARGETS geo FILE_SET HEADERS)

