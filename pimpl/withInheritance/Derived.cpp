#include "Derived.h"
#include <iostream>

// Definicja implementacji klasy pochodnej
class Derived::Impl : public Base::Impl {
public:
    void draw() override {
        std::cout << "Drawing Derived" << std::endl;
    }
};

Derived::Derived() : impl_(std::make_unique<Impl>()) {}
Derived::~Derived() = default;

void Derived::draw() {
    impl_->draw();  // Delegacja do Derived::Impl
}
