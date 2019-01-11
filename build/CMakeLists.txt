cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 11) # C++11...
set(CMAKE_CXX_STANDARD_REQUIRED ON) #...is required...
set(CMAKE_CXX_EXTENSIONS OFF) #...without compiler extensions like gnu++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#route api setting 

project (main)
include(FindPkgConfig)
# pkg_check_modules(CURLPP REQUIRED curlpp)
find_package(cpprestsdk REQUIRED)
find_package(Boost COMPONENTS filesystem system REQUIRED)

#预处理需要包含的文件夹
include_directories(src api_client api_client/model api_client/api src/model src/common)
#处理api_client文件夹的cmakelist.txt
add_subdirectory(api_client)
# 添加依赖的.cpp
set(source ../main.cpp)
file(GLOB SOURCE_FILES "src/model/*" "src/model/common/*" )
#aux_source_directory(src/model api_src)
#添加静态链接库文件夹
# link_directories(/home/yapie/github/SDK-C-/build/api_client/lib)
add_executable(${PROJECT_NAME} ${source} ${SOURCE_FILES} )

#　添加boost cpprest动态链接库
target_link_libraries(${PROJECT_NAME} CppRestSwaggerClient cpprestsdk::cpprest boost_system)



# # flat buffers settting .
# project (Test)
# include_directories(src/model/transaction)
# aux_source_directory(monsterSource src/model/transaction)
# set(sourceFile Test.cpp)
# add_executable(${PROJECT_NAME} ${sourceFile} ${monsterSource})

