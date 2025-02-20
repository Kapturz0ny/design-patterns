#ifndef DOCUMENTFACTORY_H
#define DOCUMENTFACTORY_H

#include "Document.h"
#include "PDFDocument.h"
#include "WordDocument.h"
#include <memory>
#include <string>

// Klasa bazowa fabryki
class DocumentFactory {
public:
    virtual ~DocumentFactory() = default;
    virtual std::unique_ptr<Document> createDocument() const = 0;
};

// Fabryka PDF
class PDFDocumentFactory : public DocumentFactory {
public:
    std::unique_ptr<Document> createDocument() const override {
        return std::make_unique<PDFDocument>();
    }
};

// Fabryka Word
class WordDocumentFactory : public DocumentFactory {
public:
    std::unique_ptr<Document> createDocument() const override {
        return std::make_unique<WordDocument>();
    }
};

#endif // DOCUMENTFACTORY_H
