cmake_minimum_required(VERSION 3.0.0)
project(cmake-demo VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(src/brother) #这个很关键，相当于让cmake知道子目录
add_subdirectory(src/sister)  #这个很关键，相当于让cmake知道子目录

add_executable(cmake-demo src/main.cpp)
target_link_libraries(cmake-demo brother sister) #这个就是把子目录链接进去，一定要放到add_executable后面

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
