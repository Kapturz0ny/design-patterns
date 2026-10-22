#ifndef DERIVEDB_H
#define DERIVEDB_H

#include "Base.h"
#include <iostream>

class DerivedB : public Base {
protected:
    void run() override {
        std::cout << "DerivedB: Running specific behavior B." << std::endl;
    }
};

#endif // DERIVEDB_H
