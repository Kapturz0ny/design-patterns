#ifndef HANDLER_H
#define HANDLER_H

#include <memory>
#include <iostream>

// Klasa bazowa dla handlerów
class Handler {
protected:
    std::unique_ptr<Handler> nextHandler; // Wskaźnik na kolejny handler w łańcuchu

public:
    virtual ~Handler() = default;

    // Ustawia następnego handlera w łańcuchu
    void setNext(std::unique_ptr<Handler> next) {
        nextHandler = std::move(next);
    }

    // Metoda do obsługi żądania
    virtual void handleRequest(int amount) {
        if (nextHandler) {
            nextHandler->handleRequest(amount); // Przekazanie dalej
        } else {
            std::cout << "Brak możliwości zatwierdzenia wydatku: " << amount << "$\n";
        }
    }
};

#endif // HANDLER_H
