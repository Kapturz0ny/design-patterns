#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"

class Derived : public Base {
public:
    Derived();
    ~Derived();

    void draw() override;

private:
    class Impl;  // Deklaracja klasy implementacji
    std::unique_ptr<Impl> impl_;
};

#endif // DERIVED_H
