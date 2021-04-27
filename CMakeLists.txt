cmake_minimum_required(VERSION 3.1.0)
project(dpt VERSION 0.1.0)

include(CTest)
enable_testing()

#c++版本
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置自动生成moc文件,AUTOMOC打开可以省去QT_WRAP_CPP命令
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
# 设置自动生成ui.h文件,AUTOUIC打开可以省去QT_WRAP_UI命令
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

#用分号分隔的目录列表，指定要由安装程序搜索的安装 前缀find_package()， find_program()， find_library()， find_file()， 和 find_path()命令。
set(CMAKE_PREFIX_PATH "C:/Qt/6.0.2/mingw81_64/lib/cmake")

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

# set(mode "CMAKE_BUILD_TYPE") # 修改点
# message("==========================================================")
# file(GLOB libs_path "D:/c++hong/include/*.h")
# message(${libs_path})

#添加头文件
include_directories(./include)

#添加动态库
add_subdirectory(./bin)

#生成可执行文件的位置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/dpt)

add_executable(dpt dptUI.cpp dpt.cpp)
# if(${mode} AND (CMAKE_BUILD_TYPE STREQUAL "Debug")) # 修改点
#     set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -O0")
#     add_executable(dpt dptUI.cpp dpt.cpp)

# elseif(${mode} AND (CMAKE_BUILD_TYPE STREQUAL "Release")) # 修改点
#     set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall -O3")
#     add_executable(dpt dptUI.cpp dpt.cpp)
# else()
#     add_executable(dpt dptUI.cpp dpt.cpp)
# endif()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
link_directories(./bin)
target_link_libraries(dpt PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
