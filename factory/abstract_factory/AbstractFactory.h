#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

// Interfejs fabryki abstrakcyjnej
class GUIFactory {
public:
    virtual ~GUIFactory() = default;
    // Metoda do tworzenia przycisku
    virtual class Button* createButton() const = 0;
    // Metoda do tworzenia pola wyboru (checkbox)
    virtual class Checkbox* createCheckbox() const = 0;
};

#endif // ABSTRACTFACTORY_H
