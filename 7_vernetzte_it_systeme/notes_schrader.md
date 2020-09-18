# Vernetzte IT-Systeme

### OSI Modell und Netzwerkkomponenten
- Open Systems Interconnection
- weit verbreitetes Hilfsmittel für Normung offener Sprach- und
  Datenkommunikation
- besteht aus 7 Schichten -> 1-3: anwendungsorientiert, 4-7: transportorientiert
	- Anwendung -> stellt Schnittstelle für Anwendung für Zugriff auf Netzwerk
	- Darstellung -> Umwandlung der Daten in eigenes Format, gemeinsame Syntax für Clients
	- Sitzung -> Verbindung zw. den Endgeräten, ermöglicht gute Kommunikation zw. Clients
	- Transport -> Datenpaket wird Anwendung zugeordnet, stellt entsprechenden Verbindungstyp zur Verfügung, splittet
	  Pakete auf richtige Größe, fügt ersten Header an (TCP-Header)
	- Netzwerk -> erstmalige logische Adressierung der Endgeräte, fügt zweiten Header (IP-Header, IP-Adresse des Empfängers)
	  hinzu, gewährleistet Zustellung über zuverlässige Verbindungen
	- Datenübertragung -> physikalische Adressierung mit Fehlererkennung, bereitet Pakete für die Übertragung vor, fügt
	  dritten Header (MAC-Header, MAC-Adresse des Empfängers) hinzu
	- Physikalisch -> sendet Paket an die Netzwerkhardware
- Vorteile
	- ermöglicht durch ofene Struktur Kommunikation zw. Netzwerkgeräten
	  verschiedener Hersteller
	- vereinfacht Entwicklung von Software zur Kommunikation
- Eselsbrücke: Application, Presentation, Session, Transport, Network, Data
  Link, Physical => Alle posten Susis Tante nach der Party

### Funktionselemente von Netzwerken (Aktive Komponenten)
- Netzwerkkarte -> NIC, Network Interface Card
	- Unterscheidungsmerkmale
		- Bauform (Formfaktor)
		- Steckplatz zB. PCIe
		- Geschwindigkeit zB. Standard ist 1 Gbit/s
		- Anschlüsse zB. RJ45, Glasfaser
		- aktiv (mit CPU, zB. für Server) / passiv (ohne CPU, für Laptop)
	- enthält MAC-Adresse (Media Access Control)
		- ist ab Werk festgelegt und weltweit einmalig (ist aber manipulierbar)
		- zur eindeutigen Kommunikation im Netzwerk
		- besteht aus Herstellerkennung (3 Bytes) und Seriennummer (3 Bytes)
		- Angabe meist hexadezimal zB. D0-50-99-25-A8-00
		- Anzeige Windows ipconfig /all, Linux ifconfig
