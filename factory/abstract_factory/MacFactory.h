#ifndef MACFACTORY_H
#define MACFACTORY_H

#include "AbstractFactory.h"
#include "MacButton.h"
#include "MacCheckbox.h"

// Konkretny twórca - fabryka GUI dla macOS
class MacFactory : public GUIFactory {
public:
    Button* createButton() const override {
        return new MacButton();
    }
    Checkbox* createCheckbox() const override {
        return new MacCheckbox();
    }
};

#endif // MACFACTORY_H
