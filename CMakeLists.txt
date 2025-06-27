sproject(MySingletonProject)

# 指定 C++ 标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 可执行文件
add_executable(MySingleton
    main.cpp
    Singleton.cpp
)
