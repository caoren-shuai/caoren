// circle.h
#pragma once
#include "shape.h"

class Circle : public Shape {
public:
    Circle(double r) : radius(r) {}
    std::unique_ptr<Shape> clone() const override {
        return std::make_unique<Circle>(*this);
    }
    std::string name() const override {
        return "Circle with radius " + std::to_string(radius);
    }
private:
    double radius;
};
