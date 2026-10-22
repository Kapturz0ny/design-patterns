# Fabryka Abstrakcyjna (Abstract Factory)
Azorzec projektowy, który dostarcza interfejs do tworzenia rodzin powiązanych obiektów bez określania ich konkretnych klas. Pozwala na stworzenie zestawu produktów (np. komponentów GUI) przeznaczonych do współdziałania w ramach konkretnego środowiska (np. Windows lub macOS) – wszystko przy zachowaniu spójnego interfejsu.

## Zastosowania
- Systemy wieloplatformowe: Tworzenie interfejsów graficznych (GUI), które mają odmienny wygląd i zachowanie na różnych systemach operacyjnych.
- Rodziny produktów: Gdy obiekty tworzone w ramach jednej rodziny są ze sobą kompatybilne i współpracują.
- Konfiguracja w czasie działania: Umożliwia dynamiczny wybór odpowiedniej rodziny produktów w zależności od warunków środowiskowych lub konfiguracji.

## Struktura
- **GUIFactory (Fabryka abstrakcyjna):** Definiuje interfejs metod tworzących powiązane produkty, np. createButton() i createCheckbox().
- **Concrete Factories (Konkretne fabryki):** WindowsFactory i MacFactory – implementują metody fabryczne, tworząc produkty specyficzne dla danego środowiska.
- **Product (Produkt):** Klasa bazowa definiująca wspólny interfejs dla produktów, np. Button lub Checkbox.
- **Concrete Products (Konkretny produkt):** WindowsButton i MacButton, WindowsCheckbox i MacCheckbox – konkretne implementacje produktów.

## Zalety
- Rozdzielenie interfejsu i implementacji: Klient korzysta z jednolitego interfejsu, niezależnie od konkretnej rodziny produktów.
- Łatwa rozbudowa: Nowe rodziny produktów można dodać, implementując nową fabrykę oraz konkretne produkty.
- Spójność: Produkty stworzone przez tę samą fabrykę są zaprojektowane do współdziałania.

## Wady
- Zwiększenie liczby klas: Każda nowa rodzina produktów wymaga utworzenia nowej fabryki i zestawu konkretnych produktów.
- Złożoność: Struktura wzorca może być bardziej skomplikowana, co wpływa na zrozumiałość kodu, zwłaszcza w mniejszych projektach.

## Podsumowanie
Fabryka abstrakcyjna umożliwia tworzenie rodzin powiązanych obiektów w sposób niezależny od ich konkretnych klas. Jest szczególnie przydatna w systemach wieloplatformowych lub tam, gdzie konieczne jest zapewnienie spójności między komponentami. Dzięki temu klient korzysta z jednolitego interfejsu, a dodawanie nowych produktów odbywa się bez ingerencji w już istniejący kod klienta.