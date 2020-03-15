# Hauptstädte-Ratespiel


In diesem Projekt geht es darum ein kleines Spiel zu entwickeln in dem der Spieler die Hauptstadt zu einem angegebenen Land erraten muss.

Zunächst wird dem Spieler das Land und eine maskierte Version der Hauptstadt angezeigt. Die maskierte Version zeigt für jeden Buchstaben des Namens der Hauptstadt einen Unterstrich an.

Wenn der Spieler danach eine Taste drückt wird entweder der Buchstabe an der entsprechenden Stell angezeigt oder der Fehlerzähler um eins erhöht, bis alle Buchstaben sichtbar sind.

### Beispiel

```
Italien
Hauptstadt: _ _ _ (0 Fehler)
```

1. Spieler drückt `R`
```
Italien
Hauptstadt: R _ _ (0 Fehler)
```
2. Spieler drückt `I`
```
Italien
Hauptstadt: R _ _ (1 Fehler)
```

## Aufgabe 1: Dateien einlesen

Implementieren Sie die Funktion `read_capitals_data`. Beachten Sie die nachfolgenden Hinweise zum Dateiformat.

### Dateiformat

Die erste Zeile enthält die Anzahl der Land-Hauptstadt-Paare. Die nachfolgenden Zeilen enthalten abwechselnd ein Land und die zugehörige Hauptstadt.

#### Beispiel:
```
3
land1
hauptstadt1
land2
hauptstadt2
land3
hauptstadt3
```

Die Dateien enthalten keine Leerzeilen und keine Leerzeichen die nicht in dem Namen einer Stadt oder eines Landes enthalten sind.

Im Ordner `data` gibt es zwei Dateien, jeweils die Länder und die zugehörigen Hauptstädte auf Deutsch und Englisch enthalten.

## Aufgabe 2: 