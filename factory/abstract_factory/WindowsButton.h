#ifndef WINDOWSBUTTON_H
#define WINDOWSBUTTON_H

#include "Button.h"
#include <iostream>

// Konkretny produkt - przycisk dla systemu Windows
class WindowsButton : public Button {
public:
    void paint() const override {
        std::cout << "Rendering a button in a Windows style.\n";
    }
};

#endif // WINDOWSBUTTON_H
