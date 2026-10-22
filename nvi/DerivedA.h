#ifndef DERIVEDA_H
#define DERIVEDA_H

#include "Base.h"
#include <iostream>

class DerivedA : public Base {
protected:
    void run() override {
        std::cout << "DerivedA: Running specific behavior A." << std::endl;
    }
};

#endif // DERIVEDA_H
