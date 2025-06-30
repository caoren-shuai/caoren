// #ifndef PRODUCT_H
// #define PRODUCT_H

// #include <string>

// // 抽象产品类
// class Product {
// public:
//     virtual ~Product() {}
//     virtual std::string getName() const = 0;
// };

// // 具体产品 A
// class ProductA : public Product {
// public:
//     std::string getName() const override;
// };

// // 具体产品 B
// class ProductB : public Product {
// public:
//     std::string getName() const override;
// };

// #endif // PRODUCT_H
#pragma once
#include <iostream>
#include <memory>

class ProductA {
public:
    virtual void doSomething() = 0;
    virtual ~ProductA() = default;
};

class ProductB {
public:
    virtual void doSomething() = 0;
    virtual ~ProductB() = default;
};

// --- Linux 系列实现 ---
class LinuxProductA : public ProductA {
public:
    void doSomething() override {
        std::cout << "Linux Product A is working.\n";
    }
};

class LinuxProductB : public ProductB {
public:
    void doSomething() override {
        std::cout << "Linux Product B is working.\n";
    }
};

// --- Windows 系列实现 ---
class WindowsProductA : public ProductA {
public:
    void doSomething() override {
        std::cout << "Windows Product A is working.\n";
    }
};

class WindowsProductB : public ProductB {
public:
    void doSomething() override {
        std::cout << "Windows Product B is working.\n";
    }
};
