#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <iostream>
#include <memory>

// Klasa bazowa dla dokumentów
class Document {
public:
    virtual ~Document() = default;
    virtual void open() const = 0;
};

#endif // DOCUMENT_H
