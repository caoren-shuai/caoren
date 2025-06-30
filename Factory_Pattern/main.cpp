// #include <iostream>
// #include "Factory.h"

// int main() {
//     auto product1 = Factory::createProduct("A");
//     if (product1) {
//         std::cout << "Created: " << product1->getName() << std::endl;
//     }
//     auto product5 = Factory::createProduct("A");
//     if (product1) {
//         std::cout << "Created: " << product5->getName() << std::endl;
//     }
//     auto product2 = Factory::createProduct("B");
//     if (product2) {
//         std::cout << "Created: " << product2->getName() << std::endl;
//     }

//     auto productInvalid = Factory::createProduct("C");
//     if (!productInvalid) {
//         std::cout << "Invalid product type!" << std::endl;
//     }

//     return 0;
// }
#include "Factory.h"

int main() {
    std::unique_ptr<AbstractFactory> factory;

    // 你可以根据系统环境来选择使用哪个工厂
    bool isLinux = false;

    if (isLinux) {
        factory = std::make_unique<LinuxFactory>();
    } else {
        factory = std::make_unique<WindowsFactory>();
    }

    auto productA = factory->createProductA();
    auto productB = factory->createProductB();

    productA->doSomething();
    productB->doSomething();

    return 0;
}
