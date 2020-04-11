cmake_minimum_required (VERSION 3.12)

project (flecs C)

set(CMAKE_DEBUG_POSTFIX _d)

file(GLOB flecs_SRC "src/*.c")

include_directories("include")

add_compile_definitions(FLECS_IMPL)

add_library(flecs_static STATIC ${flecs_SRC})
add_library(flecs_shared SHARED ${flecs_SRC})

if (TARGET flecs_static)
  target_compile_definitions(flecs_static PRIVATE FLECS_STATIC)
endif()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

set_target_properties(flecs_static PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib/$<0:>)
set_target_properties(flecs_static PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib/$<0:>)
set_target_properties(flecs_static PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib/$<0:>)
set_target_properties(flecs_shared PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib/$<0:>)
set_target_properties(flecs_shared PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib/$<0:>)
set_target_properties(flecs_shared PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib/$<0:>)


install(
	DIRECTORY ${PROJECT_SOURCE_DIR}/include/ DESTINATION include FILES_MATCHING PATTERN "*.h"
)
install(
	TARGETS flecs_static DESTINATION lib
)
install(
	TARGETS flecs_shared DESTINATION lib
)
