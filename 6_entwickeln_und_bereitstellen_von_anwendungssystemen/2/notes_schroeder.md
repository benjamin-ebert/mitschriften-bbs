# Objektorientierung

## Klassen / Objekte

### Klasse
- Sammlung von Möglichkeiten und Eigenschaften einer Gruppe von Objekten mit
  eindeutigem Bezeichner
- Möglichkeit = Methode, Eigenschaft = Attribut
- Sollte einfach gehalten werden
- Können Strukturen enthalten
- Kann Objekte erstellen ("Bauplan")
- ist Modell einer realen, komplexen Sache
	- unwichtiges weglassen
	- zielorientiert
	- Aufwand / Nutzen beachten (nicht für jede einzelne Farbe in dem Auto ein
	  Attribut vergeben)

### Objekt
- Identität
	- automatisch vergebener, einmaliger Namen
- Fähigkeit
- Zustand
	- Gesamtheit seiner Eigenschaften (Attribute)
	- Bsp: Finden Sie den Objektzustand Ihres Tisches
		- Beine: 4, Farbe: Grau, Farbe Gestell: Blau, Material: Holz, Höhe:
		  80cm, Breite: 2m, Länge: 1m

### Vergleich 
- Klasse = Bauplan für Objekt
- Klasse = Gruppe von späteren Objekten
- hat Datentyp aber keinen Datenwert
- Objekt = Instanz einer Klasse mit konkreten Werten für diese Attribute
- Objekt = einmalig
- auf Objekte kann man zeigen

### Weitere Begriffe
- Methode = Möglichkeiten einer Klasse (als Funktion oder Prozedur)
- Attribut = Eigenschaften einer Klasse (Variable oder Konstante)
- Attributwert = Aussage, welchen konkreten Wert die Eigenschaft des Objekts hat
- Konstanten = Eigenschaft, die in jedem Objekt den selben Wert hat

### Variable / Konstante
- Attributwert muss der Konstanten bei Deklaration (Initialisierung) mitgegeben
  werden
- Variable muss nicht initialisiert werden (kann aber zu Fehlern führen)

### Methode
- Hat Signatur
	- Name
	- Anzahl, Art und Reihenfolge der Parameter
- Benötigt
	- Rückgabetyp
	- Evtl. Modifikator (sichtbar / überschreibbar)

### Beispiele

- Klasse: Festplatte
- Objekte: der Festplatte vor der Sie sitzen
- Methode: defragmentieren()
- Attribut: freierSpeicher
- Attributwert: freierSpeicher = 128MiByte

- Klasse: Fenster
- Objekt: des Fensters hinter mir
- Methoden: öffnen(), schließen(), putzen()
- Attribute: höhe, breite, öffnungsrichtung
- Attributwerte: höhe = 2m, breite = 1m, öffnungsrichtung = links

- Klasse: Macbook
- Objekt: meines Macbooks
- Methoden: hochfahren(), herunterfahren()
- Attribute: tastaturlayout, arbeitsspeicher
- Attributwerte: usa, 16gb

### Kurzschreibweise von Objekten
- Punktschreibweise (-notation)
- Vom Großen zum Kleinen
- Wir sind derzeit hier:
  Universum.milchstraße.sonnensystem.erde.europa.deutschland.sachsenAnhalt.halle.bbs.hausB.erstesOg.raum26

### Punktschreibweise von Methoden
- DerzeitigerStandort.ersteBankreihe.rechterRechner.einschalten()
- TafelAmStandort.abwischen()
- DerzeitigerRaum.tuerOeffnen(90) (Grad)

### Punktnotation Attributwert
- RechteckAufFolie.farbe = Farbe.rot (dh. Klasse "Farbe", Attributwert "rot")
- RechteckAufFolie.breite = 15 (cm)
- RechteckAufFolie.beschriftet = nein
