#ifndef MANAGER_H
#define MANAGER_H

#include "Handler.h"

class Manager : public Handler {
public:
    void handleRequest(int amount) override {
        if (amount <= 1000) {
            std::cout << "Manager zatwierdził wydatek: " << amount << "$\n";
        } else if (nextHandler) {
            nextHandler->handleRequest(amount);
        } else {
            std::cout << "Wydatek " << amount << "$ nie może zostać zatwierdzony.\n";
        }
    }
};

#endif // MANAGER_H
