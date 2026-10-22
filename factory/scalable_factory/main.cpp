#include "DocumentFactory.h"
#include "Registration.h"
#include <iostream>
#include <memory>

int main() {
    try {
        auto pdfDoc = DocumentFactory::createDocument("pdf");
        pdfDoc->open();

        auto wordDoc = DocumentFactory::createDocument("word");
        wordDoc->open();

        // Próba stworzenia nieznanego dokumentu (wywoła wyjątek)
        auto unknownDoc = DocumentFactory::createDocument("txt");
        unknownDoc->open();
    }
    catch (const std::exception& e) {
        std::cerr << "Błąd: " << e.what() << std::endl;
    }

    return 0;
}
