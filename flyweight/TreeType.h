// Współdzielony stan
#ifndef TREETYPE_H
#define TREETYPE_H

#include <iostream>
#include <string>

class TreeType {
public:
    TreeType(const std::string& name, const std::string& color, const std::string& texture)
        : name(name), color(color), texture(texture) {}

    void display(int x, int y) const {
        std::cout << "Tree of type [" << name << "] at (" << x << ", " << y << ").\n"
                  << " - Color: " << color << "\n"
                  << " - Texture: " << texture << "\n";
    }

private:
    std::string name;   // Nazwa drzewa
    std::string color;  // Kolor drzewa
    std::string texture; // Tekstura drzewa
};

#endif // TREETYPE_H
