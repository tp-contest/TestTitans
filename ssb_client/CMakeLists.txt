cmake_minimum_required(VERSION 3.9)
project(ssb_client VERSION 1.0.1)

#############################################################################
set ( CMAKE_PREFIX_PATH /usr/lib/x86_64-linux-gnu/cmake/ )
#############################################################################

find_package(cpprestsdk)
find_package(Boost COMPONENTS system REQUIRED)

file(GLOB SOURCE_FILES "src/*")

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE
    ${Boost_SYSTEM_LIBRARY} 
    cpprestsdk::cpprest
)
target_include_directories(${PROJECT_NAME} PUBLIC "include")

add_subdirectory(tests)
