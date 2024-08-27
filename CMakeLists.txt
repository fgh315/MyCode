#定义cmake最低版本和工程名称 
cmake_minimum_required(VERSION 3.25)
project(MyCode)      #隐式定义变量PROJECT_BINARY_DIR和PROJECT_SOURCE_DIR

#将所有代码文件放入SRC_LIST中
aux_source_directory(./src SRC_LIST) 

#设置可执行文件和库文件存放目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib) 

#添加静态库和动态库
add_library(_main STATIC ${SRC_LIST}) #添加静态库
add_library(_main_shared SHARED ${SRC_LIST})# 添加动态文件

set_target_properties(_main_shared PROPERTIES OUTPUT_NAME "_main")#动态库显示为main

set_target_properties(_main_shared PROPERTIES VERSION 1.2 SOVERSION 1)#动态库版本

message(STATUS ${DIR_LIB_SRCS}"--构建库完成")

#target_include_directories(_main PUBLIC ${PROJECT_SOURCE_DIR}/include)

# 添加可执行文件
add_executable(main ${SRC_LIST})  # 添加可执行文件


#target_link_directories(main PRIVATE _main)    
#安装库
install(TARGETS _main _main_shared LIBRARY DESTINATION lib 
				   ARCHIVE DESTINATION lib)


