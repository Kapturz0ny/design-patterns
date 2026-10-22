#include "Base.h"
#include "DerivedA.h"
#include "DerivedB.h"
#include <memory>

int main() {
    std::unique_ptr<Base> objA = std::make_unique<DerivedA>();
    std::unique_ptr<Base> objB = std::make_unique<DerivedB>();

    // Wywołanie interfejsu przez metodę szablonową
    objA->execute();
    objB->execute();

    return 0;
}
