set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/inheritance.cc")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/inheritance.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibInheritance" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibInheritance" PUBLIC ${LIBRARY_INCLUDES})
target_link_libraries(
    "LibInheritance"
    PRIVATE
    "LibClasses")

