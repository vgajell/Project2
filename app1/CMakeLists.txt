cmake_minimum_required(VERSION 3.5)

project(app1)




# Add the executable
add_executable(app1 app1.cpp)
target_link_directories(app1 PRIVATE ${CMAKE_SOURCE_DIR}/../libs/build/ )
target_link_libraries(app1 math_lib)







