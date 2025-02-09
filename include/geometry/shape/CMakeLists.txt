# FILE_SET helps in installing public headers and
# also adds this directory to interface include directories.
target_sources(geo 
    PUBLIC FILE_SET HEADERS 
    BASE_DIRS ${PROJECT_SOURCE_DIR}/include
    FILES shape.h)