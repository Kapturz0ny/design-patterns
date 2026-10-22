#ifndef DOCUMENTFACTORY_H
#define DOCUMENTFACTORY_H

#include "Document.h"
#include <unordered_map>
#include <functional>
#include <memory>
#include <stdexcept>

// Skalowalna fabryka
class DocumentFactory {
public:
    using CreatorFunc = std::function<std::unique_ptr<Document>()>;

    // Rejestracja nowego typu dokumentu
    static void registerDocument(const std::string& type, CreatorFunc creator) {
        getRegistry()[type] = std::move(creator);
    }

    // Tworzenie dokumentu na podstawie typu
    static std::unique_ptr<Document> createDocument(const std::string& type) {
        auto& registry = getRegistry();
        auto it = registry.find(type);
        if (it != registry.end()) {
            return it->second();
        }
        throw std::runtime_error("Nieznany typ dokumentu: " + type);
    }

private:
    // Pobranie rejestru typów dokumentów
    static std::unordered_map<std::string, CreatorFunc>& getRegistry() {
        static std::unordered_map<std::string, CreatorFunc> registry;
        return registry;
    }
};

// Makro do automatycznej rejestracji
#define REGISTER_DOCUMENT(TYPE, CLASS) \
    namespace { \
        const bool _reg_##CLASS = []() { \
            DocumentFactory::registerDocument(TYPE, []() { return std::make_unique<CLASS>(); }); \
            return true; \
        }(); \
    }

#endif // DOCUMENTFACTORY_H
