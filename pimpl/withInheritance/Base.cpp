#include "Base.h"
#include <iostream>

// Definicja implementacji klasy bazowej
class Base::Impl {
public:
    virtual void draw() {
        std::cout << "Drawing Base" << std::endl;
    }

    virtual ~Impl() = default;
};

Base::Base() : impl_(std::make_unique<Impl>()) {}
Base::~Base() = default;

void Base::draw() {
    impl_->draw();
}
