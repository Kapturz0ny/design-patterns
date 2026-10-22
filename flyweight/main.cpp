#include "Tree.h"
#include "TreeFactory.h"
#include <vector>
#include <memory>

int main() {
    std::vector<std::unique_ptr<Tree>> forest;

    // Tworzenie lasu
    forest.push_back(std::make_unique<Tree>(10, 20, TreeFactory::getTreeType("Oak", "Green", "Rough")));
    forest.push_back(std::make_unique<Tree>(15, 25, TreeFactory::getTreeType("Pine", "Dark Green", "Smooth")));
    forest.push_back(std::make_unique<Tree>(30, 40, TreeFactory::getTreeType("Oak", "Green", "Rough")));
    forest.push_back(std::make_unique<Tree>(50, 60, TreeFactory::getTreeType("Pine", "Dark Green", "Smooth")));

    // Wyświetlanie lasu
    for (const auto& tree : forest) {
        tree->display();
    }

    return 0;
}
