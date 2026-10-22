#ifndef PDFDOCUMENT_H
#define PDFDOCUMENT_H

#include "Document.h"

// Konkretny produkt - PDF
class PDFDocument : public Document {
public:
    void open() const override {
        std::cout << "Otwieram dokument PDF\n";
    }
};

#endif // PDFDOCUMENT_H
