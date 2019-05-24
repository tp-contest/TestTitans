cmake_minimum_required(VERSION 3.9)
project(task_manager VERSION 1.0.1)

file(GLOB SOURCE_FILES "src/*")

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE ssb_client)
target_include_directories(${PROJECT_NAME} PUBLIC "include")

add_subdirectory(tests)
