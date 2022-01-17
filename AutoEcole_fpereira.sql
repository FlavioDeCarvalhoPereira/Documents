CREATE DATABASE IF NOT EXISTS `AutoEcole_Mickael` DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci;
USE `AutoEcole_Mickael`;

CREATE TABLE `MODELE` (
  `code_modele` VARCHAR(42),
  `nom` VARCHAR(42),
  `cylindree` VARCHAR(42),
  `puissance_fiscale` VARCHAR(42),
  PRIMARY KEY (`code_modele`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

CREATE TABLE `VOITURES` (
  `numero` VARCHAR(42),
  `immatriculation` VARCHAR(42),
  `date_achat` VARCHAR(42),
  `nombre_de_kilomètres` VARCHAR(42),
  `code_modele` VARCHAR(42),
  PRIMARY KEY (`numero`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

CREATE TABLE `CLIENTS` (
  `numero` VARCHAR(42),
  `nom` VARCHAR(42),
  `prenom` VARCHAR(42),
  `adresse` VARCHAR(42),
  `date_de_naissance` VARCHAR(42),
  `numero_professionnel` VARCHAR(42),
  `code_modele` VARCHAR(42),
  PRIMARY KEY (`numero`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

CREATE TABLE `LECONS` (
  `numéro` VARCHAR(42),
  `date_d'exécution` VARCHAR(42),
  `numero` VARCHAR(42),
  `numero_professionnel` VARCHAR(42),
  `numero_1` VARCHAR(42),
  PRIMARY KEY (`numéro`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

CREATE TABLE `MONITEURS` (
  `numero_professionnel` VARCHAR(42),
  `nom` VARCHAR(42),
  PRIMARY KEY (`numero_professionnel`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

ALTER TABLE `VOITURES` ADD FOREIGN KEY (`code_modele`) REFERENCES `MODELE` (`code_modele`);
ALTER TABLE `CLIENTS` ADD FOREIGN KEY (`code_modele`) REFERENCES `MODELE` (`code_modele`);
ALTER TABLE `CLIENTS` ADD FOREIGN KEY (`numero_professionnel`) REFERENCES `MONITEURS` (`numero_professionnel`);
ALTER TABLE `LECONS` ADD FOREIGN KEY (`numero_1`) REFERENCES `VOITURES` (`numero`);
ALTER TABLE `LECONS` ADD FOREIGN KEY (`numero_professionnel`) REFERENCES `MONITEURS` (`numero_professionnel`);
ALTER TABLE `LECONS` ADD FOREIGN KEY (`numero`) REFERENCES `CLIENTS` (`numero`);
