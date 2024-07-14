set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/switch.cc")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/switch.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibSwitch" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibSwitch" PUBLIC ${LIBRARY_INCLUDES})

