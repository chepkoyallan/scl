set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/while.cc")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/while.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibWhile" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibWhile" PUBLIC ${LIBRARY_INCLUDES})

