#ifndef MACBUTTON_H
#define MACBUTTON_H

#include "Button.h"
#include <iostream>

// Konkretny produkt - przycisk dla systemu macOS
class MacButton : public Button {
public:
    void paint() const override {
        std::cout << "Rendering a button in a macOS style.\n";
    }
};

#endif // MACBUTTON_H
