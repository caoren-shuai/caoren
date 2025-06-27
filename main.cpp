#include "Singleton.h"

int main() {
    Singleton::getInstance().sayHi();
    Singleton::getInstance().sayHi(); 
    Singleton::getInstance().sayHi();
    Singleton::getInstance().showSomthing();
    return 0;
}
