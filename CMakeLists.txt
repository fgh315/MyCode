cmake_minimum_required(VERSION 3.25)

project(MyCode)      #定义工程名称 隐式定义变量PROJECT_BINARY_DIR和PROJECT_SOURCE_DIR，

aux_source_directory(./src SRC_LIST) #将所有文件放入SRC_LIST中

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) #设置可执行文件存放目录
add_executable(main ${SRC_LIST})  # 添加可执行文件



