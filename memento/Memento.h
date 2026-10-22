#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>

class Memento {
public:
    explicit Memento(const std::string& state) : state(state) {}

    const std::string& getState() const {
        return state;
    }

private:
    std::string state; // Zapisany stan
};

#endif // MEMENTO_H
