#include "Manager.h"
#include "Director.h"
#include "CEO.h"

int main() {
    // Tworzenie łańcucha odpowiedzialności
    auto manager = std::make_unique<Manager>();
    auto director = std::make_unique<Director>();
    auto ceo = std::make_unique<CEO>();

    // Łączenie handlerów w łańcuch
    manager->setNext(std::move(director));
    manager->setNext(std::move(ceo));

    // Testowanie różnych kwot wydatków
    manager->handleRequest(500);   // Manager powinien zatwierdzić
    manager->handleRequest(3000);  // Director powinien zatwierdzić
    manager->handleRequest(10000); // CEO powinien zatwierdzić

    return 0;
}
