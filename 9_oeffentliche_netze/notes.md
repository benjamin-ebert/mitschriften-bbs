# Öffentliche Netze

### Öffentliche Netze
- Festnetz
- Mobilfunk
- Kabelfernsehnetz

### Definition:
Ein Netz ist öffentlich, wenn dieses im Prinzip jeder zu einer angemessenen
Gebühr nutzen kann. Die Betreiber dieser Netze werden in der Regel von der
Regierung kontrolliert und müssen ihre Dienstleistungen jedem in gleichem Umfang
anbieten.

### Beispiele für öffentliche Dienste:
- telefonieren
- Angebot per Fax versenden
- Bankkonto verwalten
- im Internet recherchieren oder Waren bestellen
- Bilder in Cloudspeicher laden
- Satellitennavigationssystem nutzen
- extern auf Daten im Firmennetz zugreifen
- fernsehen

### Grundlagen der Kommunikation
- Telekommunikationsnetze
	- Nachrichtennetze
		- öffentliche Netze: Telefonnetz, Internet
		- nicht-öffentliche Netze: Telekommunikationsanlage in privatem Gebäude
	- Datennetze
		- öffentlich: WLAN, Internet
		- nicht-öffentlich: privates LAN

### Geografische Ausdehnung der Netze
- LAN: Local Area Network (nur da kann man alles selbst festlegen)
- MAN: Metropolitan Area Network -> Verkehrsnetze, Stadtverwaltungsnetze,
  Stadtwerke
- WAN: Wide Area Network -> öffentliche Netze zB. der Telekom
- GAN: Global Area Network -> Verbindung der Kontinente untereinander (Seekabel,
  Satellit)

### Physikalische Topologie des Internets
- Topologie: spzifische Anordnung der Geräte und Leitungen, die ein Rechnernetz bilden
- physikalische T.: Aufbau der Netzverkabelung (logische T.: Datenfluss zw.
  Endgeräten)
- Bustopologie
	- alle Endgeräte über Stichleitung direkt mit demselben Übertragungsmedium (Bus) verbunden
	- Verbindung über Kabel, freien Raum oder direkt über Leiterplatte?
	- Bsp: 10Mbit/s Ethernet, WLAN
	- Vorteile
		- einfache Verkabelung und Erweiterung
		- eine Station kann zu jeder Zeit senden, wenn Medium frei
		- geringer Kabelbedarf
		- Rechnerausfall keine Auswirkung auf Funktionsfähigkeit d. Systems
	- Nachteile
		- unzuverlässig, da Bus bei Bruch im Hauptkabel defekt
		- Kollisionen verhindern Nutzung der gesamten Bandbreite des Mediums
- Sterntopologie
	- alle Teilnehmer sind über Punkt-zu-Punkt-Verbingung an zentralen
	  Teilnehmer angeschlossen (Vermittlungsanlage)
	- Bsp: Switch, Nebenstellenanlage
	- Vorteile
		- Rechnerausfall keine Auswirkung auf Funktionsfähigkeit d. Systems
		- hohe Übertragungsraten, da Kollisionen vermieden werden
	- Nachteile
		- erhöhter Kabelbedarf
		- Ausfall des zentralen Kopplungsgeräts legt gesamtes System lahm
		- relativ komplizierte Verkabelung und Erweiterung
- Extended Star
	- Vorteile
		- Netze können strukturiert angelegt und erweitert werden
		- Beim Ausfall eines Verteilers höherer Ebene existieren Verbindungen
		  innerhalb der jeweils untergeordneten Netzwerke
		- große Reichweiten
	- Nachteile
		- erhöhter Kabelbedarf
		- Beim Ausfall eines Verteilers gibt es keine Verbindungen zwischen dem
		  untergeordneten Netzwerk und dem restlichen System
		- relativ komplizierte Verkabelung und Netzwekerweiterung
- Ringtopologie
	- jeweils zwei Teilnehmer über Zweipunktverbindungen miteinander verbunden,
	  geschlossener Ring entsteht
	- festgelegte Kommunikationsrichtung
	- Vorteile
		- Kollisionen ausgeschlossen, da Vorgänger und Nachfolger definiert,
		  Bandbreite des Mediums kann vollständig genutzt werden
		- einfache Verkabelung und Erweiterung
		- geringer Kabelbedarf
	- Nachteile
		- unzuverlässig, da Bus bei Bruch im Hauptkabel defekt
		- Station kann nur dann senden, wenn sie Token bekommen hat, bis dahin
		  muss sie warten (Token = Bit, dass Empfangsbestätigung symbolisiert)
- Maschentopologie
	- 
	- Vorteile
		- große Reichweiten
		- Beim Ausfall eines Verteilers oder Rechners besteht die Möglichkeit,
		  die Informationen umzuleiten, Umleitung muss allerdings erst
		  eingerichtet werden
	- Nachteile
		- hoher Kabelbedarf
		- komplizierte Verkabelung und Erweiterung
		- komplizierte Einrichtung der Umleitungen
- Internet ist unvollständige Masche

### Übertragungsmedien
- Koaxialkabel
	- zweipolige Kabel mit konzentrischem Aufbau
	- bestehen aus Innenleiter, der in konstantem Abstand von hohlzylindrischem Außenleiter
	  umgeben ist
	- Außenleiter schirmt Innenleiter vor Störstrahlung ab
	- Zwischen Leitern ist Isolator (Dielektrikum) aus Luft (anteilig oder
	  vollständig)
	- Außenleiter durch islosierenden, korrosionsfesten, wasserdichten Mantel
	  nach außen geschützt
	- Aufbau der Kabel bestimmt Leitungswellenwiderstand und frequenzabhängige Dämpfung
- Twisted-Pair-Kabel
	- Kabel mit verdrillten Adernpaaren / Doppeladern
	- Verdrillen der Adernpaare verhindert Störung durch äußere elektrische / magnetische Felder
	- verdrillte Adernpaare können mit unterschiedlicher Schlaglänge und
	  Drehsinn in Kabel verseilt werden -> verhindert Übersprechen zwischen
	  Adernpaaren 
	- zusätzlicher Schutz vor elektromagnesischen Feldern durch elektrisch
	  leitenden Schirm (Alufolie oder Metallgeflecht)
	- Verwendung zur symmetrischen Signalübertragung, da unempfindlich gegen
	  Gleichtaktstörungen
	- Außenschirm und manchmal zusätzliche Schirme um einzelne Adernpaare
- Lichtwellenleiter
	- aus Lichtleitern bestehende, teilweise mit Steckverbindern konfektionierte
	  Kabel zur Übertragung von Licht
	- Licht wird in Quarzglas- oder Kunststofffasern geführt
	- im Zentrum liegt lichführender Kern, ist umgeben von Mantel mit etwas
	  niedriegerem Brechungsindex und weiteren Schutzschichten aus Kunststoff
	- höhere Übertragungsraten und Reichweiten als Kupferkabel
	- Einsatz in Nachrichtentechnik, Lasertechnik / Medizin, Messtechnik

### Simplex, Halbduplex, Vollduplex
- Simplex
	- Nachrichtenfluss nur in eine Richtung = unidirektional
	- Nachrichten nur vom Sender zum Empfänger
	- Bsp: Radio
- Halbduplex
	- Nachrichtenfluss bidirektional aber nur einer gleichzeitig
	- ein Übertragungskanal
- Vollduplex
	- Nachrichtenfluss bidirektional, beide können gleichzeitig senden und
	  empfangen
	- mindestens zwei Übertragungskanäle

### Übertragungsmethoden
- Multiplexing = zeitliche, räumliche, frequenz- oder wellenlängenmäßige
  Aufteilung des Übertragungsmediums in mehrere Kanäle
- Zeitmultiplexverfahren (TDM - Time Division Multiplex)
	- STM (Synchroner Transfer Mode = synchrones Zeitmultiplex)
		- arbeitet mit fest reservierten Zeitschlitzen
		- Kanäle werden im gleichen Zeitabschnitten permanent durchschaltet, egal ob da Daten
		fließen oder nicht
		- führt zu ungenutzter Bandbreite auf leeren Kanälen
	- ATM (Asynchroner Transfer Mode = asynchrones Zeitmultiplex)
		- arbeitet nicht mit fest reservierten Zeitschlitzen
		- Kanäle werden nach Bedarf geschaltet, je nachdem ob Daten fließen
		- Bandbreite immer komplett genutzt
- weitere Multiplexverfahren:
	- FDM = Frequency Division Multiplexing = Frequenzmultiplexing
	- WDM = Wave Division Multiplexing = Wellenlängenmultiplexing
	- SDM = Space Division Multiplexing = Raummultiplexing
	- usw.
