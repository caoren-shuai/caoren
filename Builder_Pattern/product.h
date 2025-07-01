# pragma once
#include<iostream>
#include<string>
class Product {
public:
    int cpu;
    int gpu;
    void show() {
        std::cout << "CPU: " << cpu << ", GPU: " << gpu << std::endl;
    }
};