#include "DocumentFactory.h"

int main() {
    // Tworzymy fabrykę PDF
    std::unique_ptr<DocumentFactory> pdfFactory = std::make_unique<PDFDocumentFactory>();
    std::unique_ptr<Document> pdfDoc = pdfFactory->createDocument();
    pdfDoc->open();

    // Tworzymy fabrykę Word
    std::unique_ptr<DocumentFactory> wordFactory = std::make_unique<WordDocumentFactory>();
    std::unique_ptr<Document> wordDoc = wordFactory->createDocument();
    wordDoc->open();

    return 0;
}
