#ifndef WINDOWSFACTORY_H
#define WINDOWSFACTORY_H

#include "AbstractFactory.h"
#include "WindowsButton.h"
#include "WindowsCheckbox.h"

// Konkretny twórca - fabryka GUI dla Windows
class WindowsFactory : public GUIFactory {
public:
    Button* createButton() const override {
        return new WindowsButton();
    }
    Checkbox* createCheckbox() const override {
        return new WindowsCheckbox();
    }
};

#endif // WINDOWSFACTORY_H
