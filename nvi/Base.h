#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base {
public:
    // Publiczna metoda szablonowa (nie-wirtualna)
    void execute() {
        std::cout << "Base: Preparing execution..." << std::endl;
        run(); // Wywołanie chronionej metody wirtualnej
        std::cout << "Base: Finishing execution." << std::endl;
    }

protected:
    // Chroniona metoda wirtualna
    virtual void run() = 0; // Metoda czysto wirtualna

    virtual ~Base() = default;
};

#endif // BASE_H
