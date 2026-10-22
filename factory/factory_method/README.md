# Wzorzec Fabryki (Factory Method)

Wzorzec kreacyjny, który dostarcza interfejs do tworzenia obiektów w podklasach, pozwalając uniknąć bezpośredniego tworzenia instancji klas w kodzie klienta.

## Struktura wzorca
- Produkt (Product) – interfejs lub klasa bazowa dla obiektów tworzonych przez fabrykę.
- Konkretny produkt (ConcreteProduct) – konkretna implementacja produktu.
- Fabryka (Creator) – interfejs lub klasa bazowa definiująca metodę fabrykującą.
- Konkretny twórca (ConcreteCreator) – implementacja fabryki, która tworzy określone obiekty.

## Przykład: System dokumentów

Załóżmy, że mamy aplikację do obsługi dokumentów i chcemy obsługiwać różne typy dokumentów (PDFDocument, WordDocument). Fabryka ma za zadanie tworzyć odpowiednie obiekty.

## Zalety wzorca Fabryki
- Oddzielenie logiki tworzenia obiektów – Klient nie musi wiedzieć, jak tworzyć konkretne obiekty.
- Łatwa rozbudowa – Dodanie nowego typu dokumentu wymaga tylko dodania nowej klasy i fabryki.
- Zasada pojedynczej odpowiedzialności (SRP) – Tworzenie obiektów nie jest powiązane z ich użyciem.

## Wady
- Zwiększona liczba klas – Każdy nowy typ obiektu wymaga nowej fabryki.
- Mniejsza przejrzystość kodu – Może utrudniać zrozumienie struktury programu.

## Podsumowanie
Wzorzec Factory Method jest idealny, gdy:
- Chcemy oddzielić tworzenie obiektów od ich użycia.
- Potrzebujemy elastyczności w dodawaniu nowych typów obiektów.
- Nie chcemy uzależniać kodu klienta od konkretnych implementacji.

Stosowany w praktyce np. w frameworkach GUI, systemach logowania, aplikacjach biurowych (np. MS Word, Excel).