cmake_minimum_required(VERSION 3.9)
project(TestTitans)

include(ExternalProject)
set(EXTERNAL_INSTALL_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/external)
ExternalProject_Add(PISTACHE
    GIT_REPOSITORY https://github.com/oktal/pistache.git
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${EXTERNAL_INSTALL_LOCATION}
)
ExternalProject_Add(NLOHMANN
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${EXTERNAL_INSTALL_LOCATION}

)
include_directories(${EXTERNAL_INSTALL_LOCATION}/include)
link_directories(${EXTERNAL_INSTALL_LOCATION}/lib)


add_subdirectory(ssb_client)
add_subdirectory(backend_server)
add_subdirectory(backend_manager)
add_subdirectory(taskmanager)
add_subdirectory(worker_server)
