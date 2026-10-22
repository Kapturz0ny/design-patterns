#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "DocumentFactory.h"
#include "PDFDocument.h"
#include "WordDocument.h"

// Rejestracja typów dokumentów w globalnym kontekście
REGISTER_DOCUMENT("pdf", PDFDocument)
REGISTER_DOCUMENT("word", WordDocument)

#endif // REGISTRATION_H
