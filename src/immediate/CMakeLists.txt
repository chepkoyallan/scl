set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/immediate.cc")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/immediate.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibImmediate" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibImmediate" PUBLIC ${LIBRARY_INCLUDES})

