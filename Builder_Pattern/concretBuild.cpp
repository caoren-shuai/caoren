#include"build.h"
class concretBuild : public Builder
{   
    Product* comp = new Product();

public:
    void buildCPU() override { comp->cpu = 1; }
    void buildGPU() override { comp->gpu = 2; }
    Product* getComputer() override { return comp; }
};