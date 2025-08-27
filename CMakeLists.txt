# CMakeList.txt : CMake project for CppPractice, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("ProxyTest")

file(GLOB_RECURSE SRC_FILES 
	  "${CMAKE_SOURCE_DIR}/src/*.cpp" 
	  "${CMAKE_SOURCE_DIR}/src/*.h"
)


find_package(fmt REQUIRED)
find_package(spdlog REQUIRED)
find_package(nlohmann_json REQUIRED)

# Add source to this project's executable.
add_executable (${PROJECT_NAME} ${SRC_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE 
fmt::fmt
spdlog::spdlog
nlohmann_json::nlohmann_json
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 23)