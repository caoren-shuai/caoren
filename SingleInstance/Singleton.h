#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

class Singleton {
public:
    static Singleton& getInstance();
    void sayHi() const;
    void showSomthing() const;

private:
    Singleton();
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

#endif
