#include "Singleton.h"

Singleton::Singleton() {
    std::cout << "构造 Singleton 实例" << std::endl;
}
//局部静态函数有线程安全性
Singleton& Singleton::getInstance() {
    static Singleton instance;
    return instance;
}

void Singleton::sayHi() const {
    std::cout << "Hi, 我是唯一的 Singleton 实例！" << std::endl;
}
