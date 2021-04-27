set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/dpt/bin)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

include_directories(./include)


add_library(QButtonGroup SHARED dptButtonGroup.cpp)


target_link_libraries(QButtonGroup PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)