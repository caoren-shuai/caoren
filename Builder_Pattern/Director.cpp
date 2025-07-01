
#include "build.h"
class Director {
public:
    void construct(Builder* builder) {
        builder->buildCPU();
        builder->buildGPU();
    }
};