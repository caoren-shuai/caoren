#include<iostream>
#include "build.h"
#include "concretBuild.cpp"
#include "Director.cpp"
using namespace std;
int main()
{
    concretBuild build;
    Director director;
    director.construct(&build);
    Product* product = build.getComputer();
    product->show();
    delete product; // Clean up dynamically allocated memory
    return 0;
}