set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/free_function.cc")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/free_function.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibfreeFreeFunction" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibfreeFreeFunction" PUBLIC ${LIBRARY_INCLUDES})

