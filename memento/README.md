# Wzorzec Memento
Wzorzec Memento pozwala zapisać i odtworzyć stan obiektu w przyszłości bez naruszania jego enkapsulacji. Dzięki temu można np. cofnąć zmiany w obiekcie, przywracając wcześniejszy stan.

## Kiedy stosować Memento?
- Gdy musisz zapisywać historię stanu obiektu, by móc go przywrócić do wcześniejszej wersji.
- Gdy chcesz uniknąć naruszania zasady enkapsulacji (nie ujawniać prywatnych pól obiektu poza jego klasę).

## Struktura wzorca
- Originator (Twórca):
  - Klasa, której stan chcemy zapisać i odtwarzać.
  - Tworzy i odczytuje obiekty Memento.
- Memento:
  - Obiekt przechowujący zapisany stan Originatora.
  - Nie udostępnia szczegółów implementacyjnych.
- Caretaker (Opiekun):
  - Zarządza obiektami Memento.
  - Przechowuje historię stanów, ale nie ingeruje w ich zawartość.

## Przykład w C++: Edytor tekstu
Opis działania
- Originator zarządza swoim stanem (state) i potrafi utworzyć jego zapis w obiekcie typu Memento.
- Memento przechowuje stan Originatora. Dzięki hermetyzacji nikt poza Originatorem nie może modyfikować stanu Memento.
- Caretaker przechowuje listę zapisanych stanów w postaci obiektów Memento. Nie ma dostępu do szczegółów ich implementacji.

## Zalety wzorca Memento
- Ochrona enkapsulacji - Stan obiektu jest przechowywany bez ujawniania szczegółów implementacji.
- Historia stanów - Możliwość cofania operacji lub odtwarzania poprzednich wersji obiektu.

## Wady wzorca Memento
- Duże zużycie pamięci - Przy dużych obiektach i wielu zapisanych stanach może wystąpić problem z zarządzaniem pamięcią.
- Brak wsparcia w języku - W przeciwieństwie do niektórych wzorców, Memento wymaga bardziej ręcznej implementacji.

## Zastosowanie w rzeczywistości
- Edytory tekstu (funkcja cofnij).
- Gry (zapisywanie i wczytywanie stanu gry).
- Aplikacje złożonych procesów (możliwość cofania kroków operacji).