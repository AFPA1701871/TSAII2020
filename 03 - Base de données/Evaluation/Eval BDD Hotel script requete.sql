
/* 1 */
SELECT nomHotel, villeHotel FROM Hotels;

/* 2 */
SELECT nomClient, prenomClient, adresseClient, villeClient FROM Clients
WHERE nomClient = "White";

/* 3 */
SELECT nomStation, altitudeStation FROM Stations
WHERE altitudeStation < 1000;

/* 4 */
SELECT NumChambre, capaciteChambre FROM Chambres
WHERE capaciteChambre > 1;

/* 5 */
SELECT nomClient, villeClient FROM Clients
WHERE villeClient != "Londres";

/* 6 */
SELECT nomStation, nomHotel, categorieHotel, villeHotel 
FROM Stations AS ST
INNER JOIN Hotels AS H ON H.idStation = ST.idStation;

/* 7 */
SELECT NumChambre,nomHotel,categorieHotel,villeHotel 
FROM Hotels AS H
INNER JOIN Chambres AS CH ON CH.idHotel = H.idHotel;


/* 8 */
SELECT nomStation, COUNT(idHotel) AS NbrHotel  
FROM Stations AS ST
INNER JOIN Hotels AS H ON H.idStation = ST.idStation
GROUP BY nomStation;

/* 9 */
SELECT  nomStation, COUNT(IdChambre) AS NbChambres 
FROM Stations AS ST
INNER JOIN Hotels AS H ON H.idStation = ST.idStation
INNER JOIN Chambres AS CH ON CH.idHotel = H.idHotel
GROUP BY nomStation;
