// #ifndef FACTORY_H
// #define FACTORY_H

// #include "Product.h"
// #include <memory>
// #include <string>

// class Factory {
// public:
//     // 简单工厂方法，根据类型创建产品
//     static std::unique_ptr<Product> createProduct(const std::string& type);
// };

// #endif // FACTORY_H
#pragma once
#include "Product.h"

class AbstractFactory {
public:
    virtual std::unique_ptr<ProductA> createProductA() = 0;
    virtual std::unique_ptr<ProductB> createProductB() = 0;
    virtual ~AbstractFactory() = default;
};

class LinuxFactory : public AbstractFactory {
public:
    std::unique_ptr<ProductA> createProductA() override {
        return std::make_unique<LinuxProductA>();
    }
    std::unique_ptr<ProductB> createProductB() override {
        return std::make_unique<LinuxProductB>();
    }
};

class WindowsFactory : public AbstractFactory {
public:
    std::unique_ptr<ProductA> createProductA() override {
        return std::make_unique<WindowsProductA>();
    }
    std::unique_ptr<ProductB> createProductB() override {
        return std::make_unique<WindowsProductB>();
    }
};
