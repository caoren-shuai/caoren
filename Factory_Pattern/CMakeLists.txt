cmake_minimum_required(VERSION 3.10)
project(FactoryExample)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加源文件
set(SOURCES
    main.cpp
    # Factory.cpp
    # Product.cpp
)

set(HEADERS
    Factory.h
    Product.h
)

# 添加可执行文件
add_executable(factory_example ${SOURCES} ${HEADERS})
