#include <iostream>
#include <thread>
#include <vector>
#include <set>
#include <mutex>
#include "Singleton.h"

int main() {
    const int threadCount = 10;
    std::vector<std::thread> threads;
    std::set<Singleton*> instances;
    std::mutex mtx;
    // 匿名函数，输入为id也就是遍历线程的id数
    auto threadFunc = [&](int id) {
        Singleton& inst = Singleton::getInstance();
        {
            std::lock_guard<std::mutex> lock(mtx);
            std::cout << "线程 " << id << " 获取实例地址: " << &inst << std::endl;
            instances.insert(&inst);
        }
    };

    for (int i = 0; i < threadCount; ++i) {
        threads.emplace_back(threadFunc, i);
    }

    for (auto& t : threads) {
        t.join();
    }

    if (instances.size() == 1) {
        std::cout << "单例线程安全测试通过，所有线程实例地址相同！" << std::endl;
    } else {
        std::cout << "单例线程安全测试失败，不同线程存在多个实例！" << std::endl;
    }

    return 0;
}
