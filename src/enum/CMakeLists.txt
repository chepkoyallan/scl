set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/enum.cc")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/enum.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibEnum" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibEnum" PUBLIC ${LIBRARY_INCLUDES})

