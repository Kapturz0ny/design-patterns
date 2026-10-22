#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "Memento.h"
#include <string>
#include <iostream>

class Originator {
public:
    void setState(const std::string& newState) {
        state = newState;
        std::cout << "State set to: " << state << std::endl;
    }

    std::string getState() const {
        return state;
    }

    Memento saveStateToMemento() const {
        return Memento(state);
    }

    void restoreStateFromMemento(const Memento& memento) {
        state = memento.getState();
        std::cout << "State restored to: " << state << std::endl;
    }

private:
    std::string state; // Bieżący stan obiektu
};

#endif // ORIGINATOR_H
