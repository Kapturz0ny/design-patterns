# Wzorzec Non-Virtual Interface (NVI)
Wzorzec Non-Virtual Interface (NVI) to technika programistyczna w językach obiektowych, polegająca na rozdzieleniu publicznego interfejsu klasy od implementacji szczegółów, poprzez zastosowanie metod szablonowych (non-virtual), które wywołują metody wirtualne.
W praktyce oznacza to, że publiczne metody klasy bazowej nie są wirtualne, natomiast ich szczegółowe zachowanie zależy od metod wirtualnych, które są zaimplementowane w klasach pochodnych.

## Główne założenia wzorca NVI
- Kontrola interfejsu:
  - Klasa bazowa definiuje sposób, w jaki metody mają być wywoływane, i kontroluje kontekst wykonania.
  - Metody publiczne w klasie bazowej NIE są wirtualne.
- Rozdzielenie interfejsu i implementacji:
  - Klasa bazowa definiuje publiczną metodę szablonową (non-virtual), która wywołuje chronioną metodę wirtualną.
- Zmniejszenie ryzyka błędów:
  - Pozwala klasie bazowej zapewnić odpowiednie przygotowanie przed wywołaniem metody wirtualnej i zachowanie spójności interfejsu.

## Struktura wzorca
- Metoda szablonowa (Template Method) - Publiczna metoda klasy bazowej, która wywołuje wirtualną metodę zdefiniowaną w klasie pochodnej.
- Metoda wirtualna - Chroniona metoda, którą klasy pochodne nadpisują, aby wprowadzić szczegóły zachowania.

## Kiedy stosować wzorzec NVI?
- Gdy chcesz zapewnić spójny interfejs użytkownikowi klasy.
- Gdy chcesz ukryć szczegóły implementacji przed użytkownikami klasy.
- Gdy potrzebujesz wykonać dodatkowe czynności przed lub po wywołaniu metody wirtualnej (np. walidacja, logowanie).

## Przykład w C++: Wzorzec NVI
Opis działania
- Base::execute: Publiczna metoda w klasie bazowej, która:
    - Wykonuje kod przed wywołaniem metody wirtualnej (run).
    - Wywołuje metodę wirtualną zaimplementowaną w klasach pochodnych.
    - Wykonuje kod po zakończeniu metody wirtualnej.
- DerivedA i DerivedB - Klasy pochodne implementują szczegóły działania metody run.
- Klient - Klient wywołuje metodę execute, nie martwiąc się o szczegóły implementacji.

## Zalety wzorca NVI
- Zachowanie spójności - Klasa bazowa kontroluje kolejność wykonywania czynności przed i po wywołaniu metody wirtualnej.
- Enkapsulacja - Detale implementacji są ukryte w klasach pochodnych.
- Elastyczność - Łatwe rozszerzanie zachowania poprzez dodawanie nowych klas pochodnych.

## Wady wzorca NVI
- Potrzeba większej liczby klas - Każde nowe zachowanie wymaga stworzenia nowej klasy pochodnej.
- Możliwe nadmiarowe abstrakcje - W prostych projektach wzorzec może być zbyt skomplikowany.

## Porównanie z innymi wzorcami
- NVI a Template Method - NVI jest implementacją wzorca Template Method, w której publiczny interfejs jest zawsze niewirtualny.
- NVI a Dziedziczenie - Klasy pochodne implementują tylko szczegóły, a logika zarządzająca pozostaje w klasie bazowej.

## Zastosowanie w rzeczywistości
- Frameworki (np. biblioteki graficzne) wykorzystują NVI, aby umożliwić użytkownikowi modyfikowanie tylko wybranych aspektów działania.
- Systemy z wielopoziomową logiką, gdzie proces przygotowania i zakończenia jest uniwersalny, a szczegóły są zróżnicowane.

