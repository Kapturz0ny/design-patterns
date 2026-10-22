// Obiekt Flyweight
#ifndef TREE_H
#define TREE_H

#include "TreeType.h"

class Tree {
public:
    Tree(int x, int y, const TreeType* type) : x(x), y(y), type(type) {}

    void display() const {
        type->display(x, y);
    }

private:
    int x, y;                    // Pozycja drzewa (stan unikalny)
    const TreeType* type;        // Typ drzewa (stan współdzielony)
};

#endif // TREE_H
