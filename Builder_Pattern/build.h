# pragma once
#include"product.h"
class Builder {
public:
    virtual void buildCPU() = 0;
    virtual void buildGPU() = 0;
    virtual Product* getComputer() = 0;
    virtual ~Builder() = default;
};