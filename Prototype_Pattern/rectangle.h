// rectangle.h
#pragma once
#include "shape.h"

class Rectangle : public Shape {
public:
    //*this是值传递
    Rectangle(double w, double h) : width(w), height(h) {}
    std::unique_ptr<Shape> clone() const override {
        return std::make_unique<Rectangle>(*this);
    }
    std::string name() const override {
        return "Rectangle " + std::to_string(width) + "x" + std::to_string(height);
    }
private:
    double width;
    double height;
};
