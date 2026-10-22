#ifndef WINDOWSCHECKBOX_H
#define WINDOWSCHECKBOX_H

#include "Checkbox.h"
#include <iostream>

// Konkretny produkt - pole wyboru dla systemu Windows
class WindowsCheckbox : public Checkbox {
public:
    void paint() const override {
        std::cout << "Rendering a checkbox in a Windows style.\n";
    }
};

#endif // WINDOWSCHECKBOX_H
