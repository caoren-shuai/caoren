// main.cpp
#include <iostream>
#include "circle.h"
#include "rectangle.h"

int main() {
    std::unique_ptr<Shape> shape1 = std::make_unique<Circle>(5.0);
    std::unique_ptr<Shape> shape2 = shape1->clone();

    std::cout << "Original: " << shape1->name() << std::endl;
    std::cout << "Clone   : " << shape2->name() << std::endl;

    std::unique_ptr<Shape> shape3 = std::make_unique<Rectangle>(3.0, 4.0);
    std::unique_ptr<Shape> shape4 = shape3->clone();

    std::cout << "Original: " << shape3->name() << std::endl;
    std::cout << "Clone   : " << shape4->name() << std::endl;

    return 0;
}
