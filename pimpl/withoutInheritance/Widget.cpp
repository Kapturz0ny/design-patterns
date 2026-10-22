#include "Widget.h"
#include <iostream>

// Definicja ukrytej klasy implementacji
class Widget::Impl {
public:
    void draw() {
        std::cout << "Drawing a Widget (implementation details)" << std::endl;
    }
};

// Konstruktor
Widget::Widget() : impl_(std::make_unique<Impl>()) {}

// Destruktor (domyślny w pliku nagłówkowym mógłby nie działać, ponieważ `Impl` jest niepełna)
Widget::~Widget() = default;

// Publiczna metoda deleguje do metody klasy Impl
void Widget::draw() {
    impl_->draw();
}
