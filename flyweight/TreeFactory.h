// Fabryka Flyweight
#ifndef TREEFACTORY_H
#define TREEFACTORY_H

#include "TreeType.h"
#include <map>
#include <string>
#include <memory>

class TreeFactory {
public:
    static const TreeType* getTreeType(const std::string& name, const std::string& color, const std::string& texture) {
        std::string key = name + color + texture;

        // Jeśli typ drzewa nie istnieje, utwórz go
        if (treeTypes.find(key) == treeTypes.end()) {
            treeTypes[key] = std::make_unique<TreeType>(name, color, texture);
        }

        return treeTypes[key].get();
    }

private:
    static std::map<std::string, std::unique_ptr<TreeType>> treeTypes; // Współdzielone typy drzew
};

std::map<std::string, std::unique_ptr<TreeType>> TreeFactory::treeTypes;

#endif // TREEFACTORY_H
