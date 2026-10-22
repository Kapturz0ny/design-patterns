#ifndef BUTTON_H
#define BUTTON_H

#include <string>

// Abstrakcyjny produkt - Button (przycisk)
class Button {
public:
    virtual ~Button() = default;
    virtual void paint() const = 0;
};

#endif // BUTTON_H
