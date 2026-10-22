#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"
#include <vector>
#include <stdexcept>

class Caretaker {
public:
    void addMemento(const Memento& memento) {
        history.push_back(memento);
    }

    const Memento& getMemento(size_t index) const {
        if (index < history.size()) {
            return history[index];
        }
        throw std::out_of_range("Invalid memento index.");
    }

private:
    std::vector<Memento> history; // Lista zapisanych stanów
};

#endif // CARETAKER_H
