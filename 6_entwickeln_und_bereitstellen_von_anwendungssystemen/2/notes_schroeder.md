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

### Ziel der OOP
- soll Probleme der Softwarekrise lösen
- Variablen werden in Klassen / dem Objekt gespeichert
- Methoden sind einheitlich für alle Objekte einer Klasse
- Beides bewirkt einfachere Wartung

### Wieso Begriff Objektorientierung?
- System besteht aus vielen Objekten
- Objekte haben EINEN inneren Zustand
- Objekte verarbeiten Botschaften (durch ihre eigenen Operationen)
- Klassen bestimmen nur die möglichen Aktionen / Reaktionen

### Drei Grundprinzipien OOP
- Bilden den kleinsten gemeinsamen Nenner der Objektorientierung:
	- Kapselung
	- Vererbung
	- Polymorphie
- Zusatz: Abstraktion, Wiederverwendbarkeit, Beziehungen

### Prinzipien
- Kapselung
	- Form der Modularisierung
	- Attribute & Methoden in einem Objekt zusammenfassen
	- Internen Aufbau nicht nach außen zeigen
	- Methoden werden über Botschaften mit klar definierten Schnittstellen
	  gestartet
	- Interne Änderungen dringen nicht nach außen
- Vererbung
	- Oberklasse (Super-, Eltern-, Basis-, vererbende Klasse)
	- Unterklasse (Sub-, Kinder-, abgeleitete, erbende Klasse) erbt alle 
	Methoden und Attribute
		- ruft zuerst Konstruktor der Superklasse auf
		- darf die Klasse ergänzen
		- ändert diese unter Umständen
	- Vorteile:
		- Methoden müssen nicht in allen Klassen einzeln erstellt werden
		- Attribute (und deren Werte) werden nur einmal benötigt
		- Leicht erweiterbar
- Polymorphie
	- Großer Pluspunkt bei OOP
	- Bedeutung: Vielgesichtigkeit
	- Klasse kann je nach Oberklasse verschieden genutzt werden
	- Methoden können kontextabhängig verwendet werden
		-> fahrzeugFahren()->PKW, Schiff, Roller, Fahrrad
	- In Java über Interfaces zu realisieren

### Abstraktion
- umgeht die Komplexität der realen Umwelt
- Ziel: optimales Modell mit
	- Beiehungen
	- Abhängigkeiten
	- Verhalten

### Übung
- Erklären Sie, wozu man eine Klasse benötigt
	-> um Dinge der realen Welt in Software abzubilden
- Erklären Sie den Begriff Attribut
	-> Eigenschaft einer Klasse
- Schreiben Sie in Kurzschreibweise: "Jens hat ein Handy mit hellblauer
  Schutzhülle" 
  -> jens.handy.schutzhülle.farbe = hellblau
  -> klein schreiben, da Jens ein Objekt der Klasse ist, und nicht die 
  Klasse selbst (das wäre Person)
  -> Kurzschreibweise = Punktschreibweise = Punktnotation
- Nennen Sie drei Grundprinzipien der OOP und erläutern Sie eins
	-> Kapselung, Vererbung, Polymorphie
	-> Kapselung: siehe oben
- Schreiben Sie in Punktnotation eine CPU-Methode
	-> cpu.berechnen()

### Übung
- Sportler.knie.beugen()

### Klassendiagramm
- Übersicht der verwendeten Klassen und deren Beziehungen
- Nennung wichtiger Schnittstellen
- Zur automatisierten Erstellung der Klassen und Methoden
- Bestandteile
	- Klassenname und Nutzung
	- Attribute
	- Methoden
	- Beziehung zwischen den Klassen

### Darstellung der Einzelklasse (wird schrittweise ergänzt)
- Klassenname (Bezeichner = Singular)
- Attribute
	- Doppelpunkt nach Attributbezeichner
	- Einfache Datentypen klein schreiben
	- Klassentypen groß schreiben -> Bsp: farbe:Color 
- Methoden
	- mit Klammern für eventuelle Parameter
	- mit Rückgabetyp -> Bsp: verschieben():Point 
	(an welchem Point ist Stuhl nach der Aktion)
	- ohne Rückgabetyp -> Bsp: hoeheVerstsllen():void
	- Konstruktoren haben keinen Rückgabetyp: Stuhl()
- Parameter (für Methoden)
	- Parameter sind Attribute, werden genau so behandelt
	- Stuhl um x cm nach rechts und y cm nach links verschieben wäre also:
	verschieben(x:int, y:int):Point
- Bsp:
	- Stuhl
	- drehbar:bool
	  farbe:Color
	- hoeheVerstellen():void
	  verschieben(x:int, y:int):Point
	|--------------------------------------|
	| Stuhl                                |
	|--------------------------------------|
	| drehbar: bool						   |
	| farbe: Color						   |
	|--------------------------------------|
	| hoeheVerstellen(): void              |
	| verschieben(x: int, y: int): Point   |
	|--------------------------------------|

### Übung Turmuhrklasse
- Erstellen Sie eine Klasse mit je zwei Einträgen für eine Kirchturmuhr
	|--------------------------------------|
	| Kirchturmuhr						   |
	|--------------------------------------|
	| hoehe: int						   |
	| zeit: Time						   |
	|--------------------------------------|
	| makeNoise(): void					   |
	| getTime(minutes: int, hours: int): Time   |
	|--------------------------------------|
 
### Klassensichtbarkeit
- Begriff sagt aus, wer auf die jeweilige Methode / das Attribut zugreifen
  kann
	- Alle -> Sichtbarkeitstyp public +
	- Niemand -> private -
	- Kinderklassen -> protected #
	- Klassen am gleichen Speicherort -> package ~ oder kein Symbol (Java)

### Übung Schreibblockklasse
- Erstellen Sie ein Klassendiagramm für Ihren Schreibblock
- 	|--------------------------------------|
	| Schreibblock						   |
	|--------------------------------------|
	| + dicke: int						   |
	| - anzahlBlaetter: int				   |
	|--------------------------------------|
	| # umblaettern(): void				   |
	| ~ blattAusreissen(anzahl: int): void |
	| ~ getAnzahlBlaetter(): int		   |
	| ~ getCompany(): string		       |
	|--------------------------------------|

### Generalisierung
- Wichtigster Grund für Klasse ist die Vererbung
- Alle Attribute & Methoden werden vererbt
- Darstellung
	- Generalisierungspfeil (ein Strich mit Dreieck!)
	- zeigt von abgeleiteter Klasse zur Basisklasse
