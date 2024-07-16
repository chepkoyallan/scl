set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/lambdas.cc")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/lambdas.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibLambdas" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibLambdas" PUBLIC ${LIBRARY_INCLUDES})

