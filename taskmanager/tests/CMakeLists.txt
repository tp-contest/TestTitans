cmake_minimum_required(VERSION 3.2)

project(task_manager_tests VERSION 0.1.0)

file(GLOB SOURCE_FILES "*.cpp")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
set_target_properties(${PROJECT_NAME} PROPERTIES
        LINKER_LANGUAGE CXX
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
        PROPERTIES COMPILE_FLAGS -Wall -Wextra -Werror -Wpedantic)
target_link_libraries(${PROJECT_NAME} task_manager)
