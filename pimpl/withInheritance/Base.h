#ifndef BASE_H
#define BASE_H

#include <memory>

class Base {
public:
    Base();
    virtual ~Base();

    virtual void draw();

protected:
    class Impl;  // Deklaracja klasy implementacji
    std::unique_ptr<Impl> impl_;  // Wskaźnik do implementacji
};

#endif // BASE_H
