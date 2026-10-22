#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Handler.h"

class Director : public Handler {
public:
    void handleRequest(int amount) override {
        if (amount <= 5000) {
            std::cout << "Director zatwierdził wydatek: " << amount << "$\n";
        } else if (nextHandler) {
            nextHandler->handleRequest(amount);
        } else {
            std::cout << "Wydatek " << amount << "$ nie może zostać zatwierdzony.\n";
        }
    }
};

#endif // DIRECTOR_H
