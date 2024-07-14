set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/struct.cc")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/struct.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibStruct" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibStruct" PUBLIC ${LIBRARY_INCLUDES})

