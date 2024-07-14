set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/if.cc")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/if.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibIf" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibIf" PUBLIC ${LIBRARY_INCLUDES})

