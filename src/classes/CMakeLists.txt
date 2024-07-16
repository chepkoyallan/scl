set(LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/person.cc")
set(LIBRARY_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/person.h")
set(LIBRARY_INCLUDES "./" "${CMAKE_BINARY_DIR}/configured_files/include")

add_library("LibClasses" STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories("LibClasses" PUBLIC ${LIBRARY_INCLUDES})

target_link_libraries(
        "LibClasses"
        PRIVATE
        "LibInheritance"
)

