# Einfache IT-Systeme

### Was ist das EVA Prinzip?
- steht für Eingabe, Verarbeitung, Ausgabe
- gilt nicht nur für die Rechentechnik, ist ein Grunprinzip der Kommunikation
- Grundsatzprinzip der Datenverarbeitung
- Computer nur für Verarbeitung zuständig, der Rest Mensch
- Speicher nimmt Sonderstellung ein (EVA S), reine EVA Systeme sind zustandslos

### Skizzieren Sie ein Blockschaltbild mit den grundlegenden Funktionen eines
Computers
- Rechenwerk und Steuerwerk bilden CPU <--> Bus-System <--> Ein-/Ausgabewerk und
  Speicherwerk (getrennte Systeme)
- CPU = Ausführung der Befehle und Ablaufsteuerung
- Steuerwerk holt Befehle aus dem Speicher
- Ein- und Ausgabewerk -> Dateneingabe / -ausgabe
- Speicherwerk -> Speicherung von Programmen und Daten

Eingabegeräte: Maus, Tastatur, Sensoren (Labor, Messwerte), Maschinenposition, Touchscreen, Kamera, Mikrofon
Ausgabe: Monitor, Lautsprecher, Steuerung von Analysegeräten / Maschinen 
Frage nach Blockschaltbild: Eingabe, Ausgabe, Verarbeitung und Speicherung an
der Verarbeitung, (nicht das oben)

### Was verstand man ursprünglich unter einem Personal Computer? Was heißt PC heute?
- früher: Einzelplatzrechner -> von einzelner Person bedien-, nutz- und steuerbar
- heute: verschiedene Bauformen und Betriebssysteme, vernetzt, multimedial,
  internetfähig, steuern Haussysteme, helfen in Wirtschaft und Verkehr
  (Navigation)
- Praktikabel und erschwinglich
- anfangs galten auch Relais-Computer als Personal Computer
- Später kamen nach Levy Kriterien universelle Einsetzbarkeit und einfache
  Handhabung (plug & play)
- Demnach Apple I erster PC

### Welche Bezeichnungen können alternativ für einen Computer verwendet werden?
Welche Bergriffe können einzelne Anwendungsbereiche beschreiben?
- Rechner, Rechenanlage, (elektronische) Datenverarbeitungsanlage
- Server, Taschenrechner, Smartphone, Laptop...

### Was versteht man unter einer PC-Geräteklasse? Nennen Sie verschiedene
Geräteklassen
- Geräteklassen definieren Einsatz bzw. Anwendungsgebiete von aktueller Hardware
- Terminals vs Rechner
- Terminals haben keinen Speicher und kein OS, kriegen sie übers Netzwerk vom
  Server
- Rechner: fest: Heimrechner, Server, Router, Supercomputer / mobil:
  Taschenrechner, Mobiltelefon, Klapprechner

### Was versteht man unter einem Barebone?
- unvollständig aufgebauter Computer, besteht meist nur aus Gehäuse (und ggf.
  Lüfter), Netzteil, Hauptplatine
- wird vom Käufer oder Händler mit weiteren Komponenten bestückt (CPU, RAM, GPU,
  Laufwerke, Betriebssystem, Software)

### Nennen Sie wesentliche Unterschiede zwischen einem Desktop-PC und einem Notebook
- Mobilität
- Ausstattung bei Notebook meist schwächer
- spezielle Komponentenformate für Notebookformat benötigt -> idR teurer als
  gleichwertige Desktopkomponente
- Notebooks standardmäßig mit In- und Ausgabegeräten ausgestattet
- Hardware-Architektur

### Welche drei Betriebszustände sind bei Laptops spezifiziert? Erläutern Sie die
Unterschiede bezogen auf Prozessor, Speicher und Displayzustand
- ON = Prozessor aktiv, Speicher aktiv, Display an
- ILDE = Prozessor inaktiv, Speicher aktiv, Display aus
- STAND-BY = Prozessor inaktiv, Speicher gesichert und inaktiv, Display aus

### Welche Unterschiede bestehen zwischen einem Netbook und einem Ultrabook?
- Ultrabook: 
	- eingetragene Warenzeichen von Intel, Bezeichnung an bestimme Anforderungen
	  geknüpft
	- maximal 21mm dick
	- Akkulaufzeit min 5h
	- Nettopreis max 1000€
	- Low-Voltage-CPU der Sandy-/Ivy-Bride oder Haswell Reihe von Intel
- Netbook:
	- Variante der Notebooks
	- Display 10-11" -> geringer als UB
	- max 1,5kg -> bei UB nicht festgelegt
	- Auflösung 1024x600 üblich -> geringer als UB
	- keine DVD Laufwerke -> bei UB auch üblich
	- geringere Hardwareresourcen als Notebooks --> ggf. geringer als Ultrabook
	- längere Akkulaufzeit als Notebooks -> ggf. länger als Ultrabook


## MAINBOARD

### Was versteht man unter einem Motherboard unter dem sog Formfaktor?
	- der Formfaktor ist eine Norm (für alle Möglichen Bauteile)
	- Angabe über Größe und Befestigungsmöglichkeiten
	- enthält zb Abmessungen, Ort und Abmaße v. Bauelementen, Anzahl Ort und
	  Größe Befestigungslöcher

### Welche Formfaktoren werden jeweils bei Netbooks und Desktop-PCs eingesetzt?
	- Netbook: ITX / Mini ITX
	- Desktop: ATX

### Was bedeutet die Abkürzung ATX? Nennen Sie Merkmale des ATX-Formfaktors.
	- Advanced Technology Extended
	- Integration d E/A Anschlüsse auf Hauptplatine selbst
	- Prozessor und Speicherbänke befinden sich neben Bussteckplätzen
	- verpolungssicherer Netzteilanschluss für Hauptplatine

### Welche Komponenten sind auf einem Mainboard zu finden?
	- Prozessorsockel
	- RAM-Steckplätze
	- BIOS-Chip
	- Schnittstellen-Bausteine
	- Steckplätze für Erweiterungskarten

### Ein Desktop PC fährt unkotrolliert hoch und runter. Was tun?
	1. Rechner abschalten & Stecker ziehen
	2. Einschalter (PC) betätigen um Restspannung der Kondensatoren zu entladen
	3. Erdung herstellen -> PC auf Erdungsmatte stellen
	4. Gehäuse öffnen, alle Kabel entfernen 
	5. Mainboard abschrauben, rausnehmen, dabei nur am Rand berühren (Handschweiß etc
	bildet sonst Brücken zwischen Bauteilen)
	6. auf neuem Motherboard im ausgebauten Zustand so viele Komponenten wie
	möglich vormontieren
	7. Abstandshalter ansetzen und festschrauben
	8. Board einsetzen, dabei nicht biegen, Schrauben überkreuz und von Hand verschrauben
	9. alle Kabel, Karten etc. wieder einsetzen
	10. Gehäuse schließen, Stecker rein, Testlauf

### Bei Windows Betriebssystemen findet man häufig die Abkürzung ACPI. Was bedeutet sie und welche Funktionen werden hiermit beschrieben?
	- Advanced Configuration and Power Interface
	- offener Industriestandard für Energieverwaltung in Desktop PC, Notebooks
	  und Servern
	- Schnittstellen für Harwareerkennung, Gerätekonfiguration und Energiemanagement
	- geleitet von Intel, Microsoft, Hewlett Packard ua.

### Was bezeichnet man als Prozessor-Die?
	- Mikrochip auf dem der eigentliche Prozessor aufgebracht ist, allerdings
	  nur, wenn noch nicht verbaut

### Wieso Prozessor Die kleiner als Prozessor Gehäuse?
	- Um Kontaktierung zw Die und Prozessor Anschlüssen zu gewährleisten
	- Um mehr Luft zur Kühlung des P zu haben

### Welche drei wesentlichen CPU Einheiten (Units) unterscheidet man?
	- Control Unit
		- steuert und kontrolliert Prozessorabläufe
		- Programmcode übersetzen und ausführen
	- Processing Unit
		- Arithmetic Logic Unit
			- arithmetische Operationen = Plus und Minus
			- Multiplikation/Division wird auf +- runtergebrochen
			- logische Funktionen 
		- Floating Point Unit
			- Kommazahlenberechnungen
		- beide haben eigenes Register
	- Cache Unit 
		- schnelles Zwischenspeichern von Daten oder Code
		- Datencache und Codecache
		- sog Level 1 Cache
		- schnellster Cache
	- (Bus Interface zur Weiterleitung von Daten zwischen Units)

### Logische Funktionen
	- Ein- und Ausgangssignal je zwei Zustände: 0 oder 1
	- Nein-Funktion ->    E1 / A -> Wenn E 1, dann A 0 und umgekehrt
	- OR-Funktion   -> E2 E1 / A -> Wenn E1 oder E2 oder beide 1, dann A 1
		=> entspricht zwei parallelen Lichtschaltern (einer muss an sein)
	- AND-Funktion  -> E2 E1 / A -> Wenn beide E 1, dann A 1
		=> entspricht zwei Lichtschaltern in Reihe (beide müssen an sein)
	- XOR-Funktion	-> E2 E1 / A -> Wenn ein E 0, ein E 1, dann A 1 (exkl. Oder)
		=> entspricht zwei Wechslern in Reihe mit parallelem Bypass
	- XAND-Funktion -> E2 E1 / A -> Wenn beide 1, dann A1 (exkl. Und)

### Was versteht man unter der Von-Neumann-Architektur? 
	- eine der Bauformen von Prozessoren
	- keine Trennung zw. internem Speicher für Daten und für Programmcode
	- Vorteil: einfache Verwaltung, effiziente Speichernutzung durch
	  bedarfsorientierte Zuordnung
	- Nachteil: langsamer durch seriellen Zugriff

### Nennen Sie vier verschiedene grundsätzliche Prozessorstrukturen, die von den Herstellern vermarktet werden. Erläutern Sie die Unterschiede
	- Single Core
	- Dual Core
	- Quad Core mit integriertem Speichercontroller
	- Quad Core mit integriertem Speichercontroller und Grafikkern

### Welche Kenngrößen eines Prozessors geben Auskunft über seine Leistungsfähigkeit?
	- CPU Taktfrequenz
	- Verbindungsart und Datenleitungen zum Speicher bzw. Chipsatz
	- Cache-Größe
	- Anzahl der verwendeten Kerne

### Aus welchem Grund geben Hersteller zu ihren Prozessoren Infos über die
"Revision" bzw das "Stepping"?
	- Revisionen = große Änderungen
	- Stepping = 
	- Infos um nachvollziehen zu können, welche Entwicklungen zuletzt
	  stattgefunden haben
	- wichtig sind zb Befehlssätze
	- wirkt sich auf Downgradefähigkeit aus

### Was bedeuten die Abkürzungen ZIF-Sockel und LGA-Sockel?
	- LGA = Land Grid Array, Verbindungssystem für integrierte Schaltungen
	- Anschlüsse des Schaltkreises werden auf Unterseite

### Kann man die heutigen Motherboards zu einem späteren Zeitpunkt mit einem leistungsfähigeren Hauptprozessor aufrüsten? Worauf ist hier ggf. zu achten?
	- ja, chipsatz muss prozessor unterstützen, wärme ableitung
	  gewährleisten (wärmeleitpaste, flüssigmetal)
	- cpu ist mit sockel kompatibel
	- bios/uefi muss prozessor unterstützen
	- fsb von board und prozessor müssen übereinstimmen
	- board muss genug spannung liefern

### Lassen sich die Prozessoren verschiedener Hersteller grundsätzlich auf dem gleichen Sockel montieren?
	- nein, weil:
		- unterschiedliche prozessorarchitekturen benötigen unterschiedliche
		  sockel
		- unterschiedliche befestigung

### Nennen sie Maßnahmen, mit denen sich die Performance von Prozessoren verbessern lässt
	- Leistung und Taktfrequenz einer CPU sind direkt proportional
	- Taktfrequenz und Temperatur sind auch direkt proportional
	- Leistungsverbesserung
		- Vergrößerung der Busbreite
		- mehr CPU Kerne
		- höherer CPU Takt
		- Höhere Registerzahl
		- Größere Anzahl parallel arbeitender Funktionsblöcke

### Welcher unterschied besteht zwischen dem CISC und RISC Prozessor
	- Unterschiede darin wie CPU arbeitet, siehe Foto Tabelle
	- CISC = Complex Instruction Set Computer
		- wenige Register (Speicherplätze in CPU)
		- ungleiche Befehlslängen, komplexe Befehle
		- um auf gleiche Befehlslängen zu kommen, muss Prozessor Leertakte
		  setzen
		- können gepatcht werden, neue Befehle können implementiert werden
	- RISC = Reduced Instruction Set Computer
		- nur wirklich notwendige Befehle, werden zu komplexeren Verknüpft
		- mehrere Register (bis zu 256) auf einem Chip
		- fest verdrahtet, kein patchen möglich
	- heutige Prozessoren enthalten das beste aus beiden Konzepten

### Was versteht man unter dem sog. EIST-Verfahren?
	= Enhanced Industry Step Technology
	- kommt bei Intel Prozessoren vor, bei AMD hats nen anderen Namen
	- Verfahren zur Leistungserhöhung (siehe blaues Foto)
		- Spannungserhöhung -> Erhöhung Taktfrequenz
		- findet nur statt wenn mehr Leistung benötigt wird (Video Rendering)
		- davor und danach niedrigere Grundfrequenz
		- Grundtakt erzeugt durch sog. Schwingquarz, ist auf Motherboard
		- über Multiplikatoren lassen sich verschiedene Taktfrequenzen erzeugen
		- Einzatz vor allem im Mobile Computing, um Akkulaufzeit zu verlängern

### Was versteht man unter einem Benchmark-Test?
	= Stresstest eines Systems
	- testet zB. Prozessor, GraKa, Arbeitsspeicher, Zugriffsgeschw. Festplatte
	- testet wie das System zusammenwirkt
	- Ergebnis ist Punktzahl (Score) -> Bewertung in Bezug auf Referenzsystem
	- davon ausgehend Leistung optimierbar

### Welche Infos kann man aus dem TDP-Wert von Prozessoren entnehmen?
	= Thermal Design Power = maximale Verlustleistung in Watt
	- erzeugt von CPU unter Volllast
	- hängt von Versorgungsspannung und Taktfr. ab, muss abgeführt (gekühlt) werden
	- lässt Rückschlüsse auf notwendige Kühlung zu

### Verlustleistung Berechnen:
	- Corespannung eines Prozessors wird von 3,3V auf 2,3V gesenkt, Leistung
	  130W
	- Um wie viel Prozent ändert sich auftretende Verlustleistung, die in Form
	  von Wärme abgeführt werden muss?
	- Lösung:
		- errechnen des Prozessorwiderstandes: R = 3,3hoch2 / 130W = 0,0838ohm
		- errechnen der Verlustleistung: P = Uhoch2/R = 63W
		- errechnen der prozentualen V.leistung: P = 100% - (63W/130W * 100) =
		  52%

### Welche besonderen Merkmale besitzt ein PWM-Lüfter?
	= Pulsweitenmodulation
	- ist eine Modulationsart deren technische Größe (zB. elektrischer Strom)
	  zwischen zwei Werten wechselt
	- digitale Ansteuerung von Lüftern
	- Signal entweder 0 oder 1
	- Dauer des 1-Signals regelt Lüfterdrehzahl
	- hat vier statt drei Leitungen, eine zur Phasensteuerung


## KAPITEL 1.4 - Chipsatz

### Welche Aufgaben hat der Chipsatz?
	- Chipsatz = Summe aller Chips auf dem Motherboard
	- Ansteuerung des Arbeitsspeichers
	- Verwaltung der verschiedenen BUS Systeme (SATA, PCI, PCIe, AGP...)
	- Abstimmung der unterschiedlichen Bustakte und Übertragungsraten
	- kann DRAM-Refresh übernehmen
	- sorgt für verschiedene Taktfrequenzen
	- verbindet Proz. mit GraKa und weteren Peripheriegeräten (Festplatten),
	  Schnittstellen...

### Welche unterschiedlichen Bezeichnungen haben die Chipsatz Komponenten?
	- Northbridge (VIA, SIS) = Memory Controller Hub (MCH) (Intel) = Integrated Graphics Processor /
	  System Platform Processor (SPP) (Nivida)
	- Southbridge = Input/Output Controller Hub (ICH), Media Communication
	  Processor (MCP)
	- momentaner Entwicklungstrend eher Einchip-Lösungen (Nvidia)

### Welchen Vorteil bietet ein Chipsatz mit nur einem IC?
	- Geschwindigkeitssteigerung bei der Bearbeitung anstehender Aufgaben durch
	  Verkürzung der Signalwege zwischen Chipsatzkomponenten

### Verbindung zwischen Chipsatz und CPU - WIRD NICHT ABGEFRAGT
	- Taktfrequenzen zwischen 100 und 400Mhz
	- beträgt Front Side Bus bsp 100MHz und der Multiplikator der CPU 12, so
	  wird diese mit 1200MHz getaktet
	- Hypertransport: bidirektionale Hochgeschwindigkeitsverbindung,
	  Taktfrequenz bis 100MHz, genutzt von AMD
	- QPI = Quick Path Interconnection: serielle Punkt zu Punkt Verbindung,
	  Hochgeschwindigkeitsverbindung
	- Direct Media Interface: vorwiegend bei i5 und i7 Sockeln eingesetzt

### Chipsatz zu späterem Austausch möglich ja/nein? Warum, warum nicht?
	- Nein, weil fest mit Motherboard verbunden und in Eigenschaften und
	  Leistung an Board angepasst => neuer Chipsatz? Neues Board.


## KAPITEL 1.5 - elektronische Speicher

### Auf einer englischen Internetseite über elektr. Speicher wird der Begriff "Volatile Memory" verwendet. Welche Bedeutung hat diese Bezeichnung?
	- flüchtiger Speicher = elektronische Speicherelement, das Daten nur speichern kann, solange eine Spannungsversorgung vorhanden ist. Bei Unterbrechnung / Abschalten gehen gespeicherte Daten verloren

### Welche verschiedenen Halbleiterspeicher gibt es in einem PC und welche Unterschiede bestehen bezüglich des Speicherverhaltens?
	- nicht flüchtige und flüchtige Speicher (s.o.) -> RAM
	- nicht flüchtig = kann Daten auch nach Abschalten der Spannungsversorgung
	  speichern -> RAM
	- C-MOS Speicher -> spezieller batteriegepufferter statischer Speicher
	- Flash-EEPROM -> Daten bleiben erhalten und können mit spezielle Programm
	  geändert werden
	- gute Übersicht: Buch Seite 58	 

### Wofür stehen die Abkürzungen Flash EEPROM, SRAM, DRAM, SDRAM und DDRRAM? (Prüfungsrelevanz)
	- Flash = besondere Kategorie von EEPROMs, ermöglicht gleichzeitiges löschen/beschreiben mehrer Bytes -> höhere Datenrate
	- EEPROM = Electrical Erasable Programmable Read Only Memory -> byteweise Löschung von Speicherinhalt durch elektrischen Impuls
	- SRAM = Static Random Access Memory -> arbeiten asynchron, also ohne Abstimmung auf Timing anderer Systemkomponenten
	- SSRAM = Synchronous Static RAM -> arbeiten synchron zum Systemtakt, auch intern
	- DRAM = Dynamic RAM -> Speicherinhalt muss in kurzen Abständen erneuert werden (Refresh)
	- SDRAM = 
		- Synchronous DRAM -> verwendet zB. für Arbeitsspeicher, können Daten
		  nur bei ansteigender Taktsignalflanke auslesen
		- Basis für alle DDR-RAMs, Basistakt 133MHz
	- DDR-RAM = 
		- Double Date Rate SDRAM -> Speicherbausteine können Daten auf an- und absteigender Taktflanke lesen/schreiben 
		- Weil zweite Flanke mit dazu kommt, ist Basistakt 266MHz
		- DDR2-RAM hat doppelte Taktfrequenz (533MHz)
		- gute Übersicht: Buch Seite 72
	
### Die Speicherkapazität wird in MByte bzw. GByte oder neuerdings in MiByte bzw GiByte angegeben.
	- Megabyte (MB) = Dezimalpräfix
	- Mebibyte (MiB) = Binärpräfix
	- Umrechnung: Auf Byte runterrechnen, dann wieder hoch
	-> unterschiedliche Zahlenwerte je nach Präfixart

### WelcheArtenvonFlashspeicherkartengibtes? Welche Eigenschaften haben sie?
	- Compact Flash (CF)
		- Typ I / II-> 50 Pins, 160 MiB/s
		- CFAST 2.0 -> 24 Pins, 600 MiB/s
	- Secure Digital (SD)
		- Standard / SDHC / SDXC -> 9 Pins, 25-100 MiB/s
		- miniSD / miniSDHC -> 11 Pins, 25-30 MiB/s
		- microSD -> 8 Pins, 25 MiB/s

### Bei SDHC Speicherkarten wird der sogenannte Speed-Class angegeben. Was bedeutet SDHC und welche Informationen kann man der Speed-Class entnehmen?
	- SDHC = Secure Digital High Capacity
	- Speed-Class = Tempoklasse -> minimal garantierte Schreibgeschwindigkeit auf den Datenträger

### Was bedeutet ein Refresh im Zusammenhang mit elektronischen Speicherzellen?
	- DRAM Zelle besteht aus Transistor und Kondensator
	- Informationsspeicherung durch Ladungsspeicherung im Kondensator
	- Kondensator gibt permanent Ladung ab = Informationsverlust
	- deshalb Refresh alle 64ms = Spannungsimpuls, Informationen auslesen, erneut schreiben
	- während Refresh kein Zugriff auf gespeicherte Daten durch Prozessor möglich
	- Refreshzyklus Selbststeuerung durch eingebaute Steuerlogik (Self-Refresh)

### Welche Kontrolle lässt sich bei Speicherbausteinen mit einer Paritätsprüfung durchführen? Erläutern Sie das Grundprinzip der Paritätsprüfung. (Prüfungsrelevanz)
	- Möglichkeit der Fehlerkontrolle anhand eines zusätzlichen Paritätsbits -> ist 0 oder 1, je nachdem ob Anzahl an Einsen im Datenbyte gerade oder ungerade ist
	- erkennbar ob Fehler innerhalb des Datenworts aufgetreten ist, Korrektur allerdings nicht möglich
	- Doppelfehler werden auch nicht erkannt

### Als Arbeitsspeicher werden in Desktop-PCs sogenannte DIMM-Module verwendet. Erläutern Sie die Bezeichnung DIMM.
	- Dual Inline Memory Modul -> Speichermodule deren Anschlusskontakte beidseitig an einem Rand der Leiterplatte angebracht werden, auf dem die Speicherchips befestigt sind
	- verschiedene DIMM-Module unterscheiden sich in Position der Kerben

### Unterschied zw. UDIMM und FBDIMM
	- UDIMM: keine Zusatzmodule zw. Speichercontroller und DRAM Modulen
	- FBDIMM: haben Kühlkörper und Zusatzmodule

### 11. 

### 12.

### 13.

### 14.

### Was ist Cache Speicher
	- kleiner und schneller als Arbeitsspeicher
	- lädt Daten voraus und hält sie für Prozessor bereit

### Warum werden verschiedene Cache Stufen eingesetzt
	- First Level Cache am kleinsten, schnellsten und nächsten zum Prozessor
	- Second und Third Level entsprechend größer, langsamer, weiter weg

### Was ist RTC RAM
	- Real Time Clock, speichert interne Systemzeit


## KAPITEL 1.6 - Bussysteme

### Unterschiede zwischen parallelem und seriellem Bus
	- parallel:
		- Gruppe zusammengehörender Bits (Datenwort) wird gleichzeitig über separate Leitungen übertragen
		- besteht idR. aus speziellen Gruppen von Leitungen, übertragen
		  unterschiedliche Arten von Informationen
		- Datenbus (bidirektional)
		- Adressbus (unidirektional)
		- Steuerbus (unidirektional)
		- verschiedene Busstandards: ISA-, EISA-, PCI-Bus
		- werden für Anbindung von RAM an Controller in CPU und für GDDR-RAM
		  eingesetzt
		- eines der beiden Geräte verhält sich als Controller, das andere als
		  passiver Empfänger
	- seriell
		- zusammengehörende Bits werden nacheinander auf einer Leitung
		  übertragen
		- wird auch als Link bezeichnet
		- bestehen aus einem bidirektionalen Adernpaar oder aus zwei Adernpaaren
		  (bidirektional, vollduplex)
		- Übertragung von Adress-, Steuer- und Datensignalen erfolgt
		  nacheinander
		- Bsp. USB und Firewire

### Aus welchen grundsätzlichen Leitungsgruppen besteht ein paralleler Bus?
	- siehe drüber

### Unterschied zw. unidirektionalem und bidirektionalem Bus
	- unidirektional: Signale werden in eine Richtung gleichzeitig gesendet
	- bidirektional: Signalübertragung in beide Richtungen, zu unterschiedlichen
	  Zeiten
	
### Begründen Sie, warum serielle Bussysteme bei hohen Taktfrequenzen Vorteile gegenüber parallelen Bussystemen aufweisen
	- bei seriellen BS können hohe Übertragungsraten durch zusammenschalten
	  mehrerer Links erreicht werden, dann gleichzeitige, taktunabhängige
	  Datenübertragung möglich
	- keine Probleme durch unterschiedliche Signallaufzeiten

### Berechnung Übertragungsdauer Datenbus

Über einen Datenbus werden 2,6GB Nutzerdaten übertragen. Welche Zeit wird unter
Berücksicht. der im Kapitel angegebenen maximalen Übertragungsraten benötigt?

- Vorbetrachtung: 2,6 GB = 2600 MB = 2,6 * 10^6 KB = 2,6 * 10^9 B = 20,8 * 10^9
  Bit -> 20.312.500 MiBit -> 19.836,42578 GiBit
- bei USB 2.0 Bus: 480 MiBit/s -> t = 42.317,7s = 705,3min = 11,8h
- bei USB 3.0 BUS: 5 GiBit/s -> t = 3.967,3s = 66,1min = 1,1h
- bei Firewire gemäß IEEE 1294b (S3200): 3.200MiBit/s -> t = 6.347,7s = 105,8min
  = 1,8h
- bei PCIe 3.0 x 16: 8 GiBit/s/Lane -> 128 GiBit/s -> t = 155s = 2,6min

### Ein Prozessor kann max. 64 GB Speicher adressieren. Wie viele Adressleitungen sind hieru erforderlich?

- Anzahl Adressleitungen: A = log n / log 2
- n: Anzahl adressierbarer 8-bit Speicherplätze
- Lt. Aufgabe: n= 64 GB = 64 * 10^9 Byte
- A = 35,9 -> 36 Adressleitungen, da nur ganze Leitungen verwendet werden können

### Berechnen Sie, wie viele Bytes Speicherkapazität ein 64 GB Speicher hat

- 64 GB = 64 * 10^9 Byte = 64 000 000 000 Byte

### Unterschied zwischen PCI und PCI Express

- PCI (Peripheral Component Interconnect Bus)
	- CPU-unabhängiges paralleles Bussystem zur Verbindung aller relevanten
	  PC-Komponenten
	- unterstützt Bus-Mastering (Kontrollabgabe von CPU an Erweiterungskarte)
	  und Autokonfiguration (Plug & Play) von Erweiterungskarten
- PCIe (e = Express)
	- bezeichnet Verbindungstechnik innerhalb eines PCs zwischen Chipsatz / CPU
	  und zusätzlich eingebauten Komponenten
	- Punkt-zu-Punkt verbindungen (Lanes)
	- kein Paralleles, sondern serielles System, jedes Device erhält eigenen Anschluss
	- Datenübertragung erfolgt seriell, Verarbeitung der Geräte erfolgt parallel
	- gesendete / empfangene Daten können gleichzeitig auf getrennten Aderpaaren
	  mit differenziellen Signalen übertragen werden (Vollduplex)

### Welche Bedeutung hat das USB-Symbol?

- Dreieck steht für nächste Ebene
- Punkt steht für Gerät ohne Hub
- Quadrat steht für Gerät mit Hub (vllt aber auch andersrum)
