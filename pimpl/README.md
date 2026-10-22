# Wzorzec Pimpl (Pointer to Implementation)
Wzorzec Pimpl to technika ukrywania szczegółów implementacji klasy, aby:
- Zmniejszyć zależności między plikami: Szczegóły implementacji są ukryte w innym pliku, co pozwala zmieniać implementację bez ponownej kompilacji kodu korzystającego z interfejsu.
- Poprawić enkapsulację: Klienci klasy widzą tylko deklarację, a szczegóły implementacji są całkowicie niewidoczne.
- Zmniejszyć czas rekompilacji: Jeśli zmienimy implementację w pliku źródłowym, nie ma potrzeby rekompilacji plików, które korzystają z tej klasy.

## Kluczowe elementy wzorca
- Klasa publiczna – widoczna dla użytkownika i zawierająca interfejs.
- Klasa implementacji (Pimpl) – przechowywana jako wskaźnik w klasie publicznej, ukrywająca szczegóły implementacji.

# Schemat dziedziczenia (jeśli występuje)
Jeśli występuje dziedziczenie, klasa pochodna dziedziczy po klasie bazowej, ale każda klasa (bazowa i pochodna) ma swoją własną implementację (Pimpl). Schemat wygląda tak:
- Klasa Base ma wskaźnik do BaseImpl.
- Klasa Derived dziedziczy po Base i ma wskaźnik do DerivedImpl, który dziedziczy po BaseImpl.
