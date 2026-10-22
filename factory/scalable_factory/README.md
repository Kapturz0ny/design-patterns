# Wzorzec Fabryki Skalowalnej (Scalable Factory)
Rozszerzenie Factory Method, które pozwala dynamicznie rejestrować nowe typy obiektów. Dzięki temu możemy dodawać nowe klasy bez modyfikowania kodu fabryki.

## Struktura wzorca
- Interfejs (Product) – klasa bazowa dla obiektów tworzonych przez fabrykę.
- Konkretny produkt (ConcreteProduct) – konkretna implementacja produktu.
- Fabryka (Factory) – przechowuje mapę funkcji fabrykujących, umożliwiając dynamiczne rejestrowanie nowych typów.
- Rejestracja (Registration) – pozwala dodawać nowe typy do fabryki w czasie działania programu.

## Zalety wzorca Fabryki Skalowalnej
- Dynamiczne dodawanie typów – można rejestrować nowe obiekty bez modyfikacji kodu fabryki.
- Łatwa rozbudowa – dodanie nowej klasy wymaga tylko jej implementacji i rejestracji.
- Zastosowanie makr (REGISTER_DOCUMENT) – ułatwia rejestrację nowych typów dokumentów.

## Wady
- Nieznacznie większa złożoność kodu – wymaga zarządzania rejestrem obiektów.
- Koszt wywołania przez std::function – minimalny narzut w porównaniu do bezpośredniego wywołania konstruktora.

## Podsumowanie
**Wzorzec Fabryki Skalowalnej** pozwala na dynamiczne rejestrowanie i tworzenie obiektów. Dzięki temu możemy rozszerzać system bez modyfikacji kodu fabryki, co jest szczególnie przydatne w pluginach, systemach wtyczek i dynamicznych konfiguracjach aplikacji. 🚀