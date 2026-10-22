#include "Derived.h"

int main() {
    Base* base = new Derived();
    base->draw();  // Wywołuje Derived::draw()
    delete base;
    return 0;
}
