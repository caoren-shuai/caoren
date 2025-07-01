#pragma once
#include <memory>
#include <string>

class Shape {
public:
    virtual ~Shape() = default;
    virtual std::unique_ptr<Shape> clone() const = 0;
    virtual std::string name() const = 0;
};