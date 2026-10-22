# Wzorzec Chain of Responsibility (Łańcuch zobowiązań)
Wzorzec projektowy, który umożliwia przekazywanie żądania przez łańcuch obiektów. Każdy obiekt w łańcuchu może obsłużyć żądanie lub przekazać je dalej do następnego elementu.

## Struktura wzorca
- Handler (Obsługujący) – interfejs lub klasa bazowa z metodą do obsługi żądań i wskaźnikiem na kolejny handler.
- Concrete Handler (Konkretny obsługujący) – konkretne klasy, które implementują obsługę lub przekazują żądanie dalej.
- Client (Klient) – inicjuje żądanie i przekazuje je do pierwszego handlera w łańcuchu.

## Przykład w C++: System obsługi zatwierdzania wydatków
Załóżmy, że mamy system zatwierdzania wydatków w firmie:
- Kierownik (Manager) może zatwierdzić wydatki do 1000$.
- Dyrektor (Director) może zatwierdzić wydatki do 5000$.
- Prezes (CEO) może zatwierdzić dowolną kwotę.

## Zalety wzorca Chain of Responsibility
- Redukuje zależności – Nadawca żądania nie musi wiedzieć, który obiekt je obsłuży.
- Elastyczność – Można łatwo dodawać kolejne elementy do łańcucha.
- Zasada pojedynczej odpowiedzialności (SRP) – Każdy handler odpowiada za jedną konkretną część logiki.

## Wady
- Brak gwarancji obsługi – Jeśli żaden handler nie obsłuży żądania, może ono zostać odrzucone.
- Trudniejsze debugowanie – Ze względu na dynamiczny przepływ żądań przez łańcuch.

# Podsumowanie
- Wzorzec Chain of Responsibility pozwala przekazywać żądanie przez łańcuch handlerów.
- Każdy handler może obsłużyć żądanie lub przekazać je dalej.
- Ułatwia dodawanie nowych poziomów obsługi bez modyfikacji kodu nadawcy.

Jest to idealne rozwiązanie dla systemów, gdzie różne jednostki mogą podejmować decyzje na podstawie określonych kryteriów, np. logowanie, filtrowanie żądań, przetwarzanie poleceń w aplikacjach. 🚀