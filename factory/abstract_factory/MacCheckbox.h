#ifndef MACCHECKBOX_H
#define MACCHECKBOX_H

#include "Checkbox.h"
#include <iostream>

// Konkretny produkt - pole wyboru dla systemu macOS
class MacCheckbox : public Checkbox {
public:
    void paint() const override {
        std::cout << "Rendering a checkbox in a macOS style.\n";
    }
};

#endif // MACCHECKBOX_H
