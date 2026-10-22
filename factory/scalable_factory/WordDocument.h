#ifndef WORDDOCUMENT_H
#define WORDDOCUMENT_H

#include "Document.h"

// Konkretny produkt - Word
class WordDocument : public Document {
public:
    void open() const override {
        std::cout << "Otwieram dokument Word\n";
    }
};

#endif // WORDDOCUMENT_H
