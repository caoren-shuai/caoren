#include "Factory.h"

std::unique_ptr<Product> Factory::createProduct(const std::string& type) {
    if (type == "A") {
        return std::make_unique<ProductA>();
    } else if (type == "B") {
        return std::make_unique<ProductB>();
    } else {
        return nullptr;
    }
}
