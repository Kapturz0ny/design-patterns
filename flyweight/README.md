# Wzorzec Flyweight (Pyłek)
Wzorzec Flyweight (ang. Flyweight) to strukturalny wzorzec projektowy, który pozwala zaoszczędzić pamięć przez współdzielenie wspólnych części stanu obiektów zamiast przechowywania ich w każdym obiekcie z osobna.
## Kiedy używać Flyweight
- Kiedy aplikacja tworzy bardzo dużą liczbę podobnych obiektów, co prowadzi do znacznego zużycia pamięci.
- Kiedy wiele obiektów może współdzielić część swojego stanu, podczas gdy reszta stanu jest unikalna dla każdego obiektu.

## Podział stanu w Flyweight
- Stan współdzielony (Intrinsic State):
  - Dane, które są wspólne dla wielu obiektów.
  - Przechowywane wewnątrz obiektu Flyweight.

- Stan unikalny (Extrinsic State):
  - Dane specyficzne dla danego obiektu.
  - Przekazywane podczas używania obiektu Flyweight.

# Przykład w C++: Gra z drzewami
Załóżmy, że w grze mamy las, w którym każde drzewo ma:
- Gatunek drzewa (stan współdzielony).
- Położenie na mapie (stan unikalny).

**Opis działania**
- Tworzenie typów drzewa:
  - TreeFactory zarządza współdzielonymi typami drzew (TreeType).
  - Jeśli typ drzewa istnieje, zwraca istniejący obiekt.
  - Jeśli typ drzewa nie istnieje, tworzy nowy.
- Tworzenie obiektów drzewa:
  - Tree zawiera pozycję (x, y) jako stan unikalny.
  - TreeType jest współdzielonym stanem między wieloma drzewami.
- Wyświetlanie lasu:
  - Każde drzewo używa współdzielonego obiektu TreeType do wyświetlania swoich cech.

## Zalety wzorca Flyweight
- Zmniejszenie zużycia pamięci - Współdzielenie wspólnych danych minimalizuje redundancję.
- Zwiększona wydajność - Obiekty współdzielone zajmują mniej pamięci.

## Wady wzorca Flyweight
- Większa złożoność - Rozdzielenie stanu na współdzielony i unikalny może być trudne w implementacji.
- Ograniczenia - Nie zawsze jest możliwe określenie, które dane mogą być współdzielone.