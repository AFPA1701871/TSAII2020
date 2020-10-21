1. 
CREATE DATABASE GestionRepresentant; 
2.
USE    GestionRepresentant;
3.
CREATE TABLE clients(
    IdClient int(11) NOT NULL AUTO_INCREMENT,
    NomClient VARCHAR(25) NOT NULL,
    VilleClient VARCHAR(25),

    PRIMARY KEY(IdClient)
) ENGINE = INNODB;
CREATE TABLE ventes(
    IdVente int(11) NOT NULL AUTO_INCREMENT,
    IdRepres int(11) NOT NULL,
    Idproduit int(11) NOT NULL,    
    IdClient int(11) NOT NULL,  
    Quantite int(11) ,    
    PRIMARY KEY(IdVente)
) ENGINE = INNODB ; 
CREATE TABLE representants(
    IdRepres int(11) NOT NULL AUTO_INCREMENT,
    NomRepres VARCHAR(25) ,
    VilleRepres VARCHAR(25) ,    
    PRIMARY KEY(IdRepres)
) ENGINE = INNODB ;
CREATE TABLE produits(
    IdProduit int(11) NOT NULL AUTO_INCREMENT,
    NomProduit VARCHAR(25) ,
    CouleurProduit VARCHAR(25) ,
    PoidsProduit int(11) , 
    PRIMARY KEY(IdProduit)
) ENGINE = INNODB ;
4.
ALTER TABLE `ventes`
  ADD CONSTRAINT `FK_ventes_clients` FOREIGN KEY (`IdClient`) REFERENCES `clients` (`IdClient`),
  ADD CONSTRAINT `FK_ventes_representants` FOREIGN KEY (`IdRepres`) REFERENCES `representants` (`IdRepres`),
  ADD CONSTRAINT `FK_ventes_produits` FOREIGN KEY (`Idproduit`) REFERENCES `produits` (`Idproduit`);
5.
INSERT INTO `representants`(
    `IdRepres`,
    `NomRepres`,
    `VilleRepres`
)
VALUES(NULL, 'CAMARA', 'Lille'),(NULL, 'DUVAL', 'Douai'),(NULL, 'DUPOND', 'Valenciennes'),(NULL, 'TROMPI', 'Dunkerque'),(NULL, 'DURAND', 'Calais');
6.
UPDATE `representants` SET `VilleRepres`="Valenciennes" WHERE `NomRepres`="DURAND";
7.
DELETE FROM `representants` WHERE `NomRepres`="DUPOND";
8.
INSERT INTO `produits`(`IdProduit`, `NomProduit`, `CouleurProduit`, `PoidsProduit`) VALUES (null,"crayon","noir",12);
INSERT INTO `clients`(`IdClient`, `NomClient`, `VilleClient`) VALUES (null,"toto","cert");
INSERT INTO `ventes`(`IdVente`, `IdRepres`, `Idproduit`, `IdClient`, `Quantite`) VALUES (null,1,1,1,10)