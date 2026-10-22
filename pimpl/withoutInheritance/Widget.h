#ifndef WIDGET_H
#define WIDGET_H

#include <memory> // std::unique_ptr

class Widget {
public:
    Widget();
    ~Widget();
    
    void draw();  // Publiczna metoda, widoczna dla klienta

private:
    class Impl;  // Forward-declaration klasy implementacji
    std::unique_ptr<Impl> impl_;  // Wskaźnik do ukrytej implementacji
};

#endif // WIDGET_H
