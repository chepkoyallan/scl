set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/for.cc")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/for.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibFor" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibFor" PUBLIC ${LIBRARY_INCLUDES})

