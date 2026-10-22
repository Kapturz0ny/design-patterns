#ifndef CHECKBOX_H
#define CHECKBOX_H

// Abstrakcyjny produkt - Checkbox (pole wyboru)
class Checkbox {
public:
    virtual ~Checkbox() = default;
    virtual void paint() const = 0;
};

#endif // CHECKBOX_H
