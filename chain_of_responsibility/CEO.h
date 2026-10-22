#ifndef CEO_H
#define CEO_H

#include "Handler.h"

class CEO : public Handler {
public:
    void handleRequest(int amount) override {
        std::cout << "CEO zatwierdził wydatek: " << amount << "$\n";
    }
};

#endif // CEO_H
