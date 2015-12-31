# ************************************************************
# Sequel Pro SQL dump
# Version 4135
#
# http://www.sequelpro.com/
# http://code.google.com/p/sequel-pro/
#
# Host: localhost (MySQL 5.5.42)
# Database: ketang
# Generation Time: 2015-12-31 01:50:12 +0000
# ************************************************************


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


# Dump of table attend
# ------------------------------------------------------------

DROP TABLE IF EXISTS `attend`;

CREATE TABLE `attend` (
  `aid` int(5) unsigned NOT NULL AUTO_INCREMENT,
  `sid` int(5) unsigned NOT NULL,
  `cid` int(5) unsigned NOT NULL,
  `date` bigint(20) DEFAULT NULL,
  PRIMARY KEY (`aid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `attend` WRITE;
/*!40000 ALTER TABLE `attend` DISABLE KEYS */;

INSERT INTO `attend` (`aid`, `sid`, `cid`, `date`)
VALUES
	(62,2,1,1450000944341),
	(63,11,3,1450001009068),
	(64,3,3,1450001010468),
	(65,2,3,1450001011319),
	(66,5,1,1451209088991),
	(67,2,1,1451209090303),
	(68,3,1,1451498251392),
	(69,4,1,1451498251677);

/*!40000 ALTER TABLE `attend` ENABLE KEYS */;
UNLOCK TABLES;


# Dump of table class
# ------------------------------------------------------------

DROP TABLE IF EXISTS `class`;

CREATE TABLE `class` (
  `cid` int(5) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(50) NOT NULL,
  `tid` int(5) unsigned NOT NULL,
  PRIMARY KEY (`cid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `class` WRITE;
/*!40000 ALTER TABLE `class` DISABLE KEYS */;

INSERT INTO `class` (`cid`, `name`, `tid`)
VALUES
	(1,'面向对象程序设计',1),
	(2,'大学英语',1),
	(3,'算法分析',1);

/*!40000 ALTER TABLE `class` ENABLE KEYS */;
UNLOCK TABLES;


# Dump of table score
# ------------------------------------------------------------

DROP TABLE IF EXISTS `score`;

CREATE TABLE `score` (
  `scid` int(5) unsigned NOT NULL AUTO_INCREMENT,
  `cid` int(5) NOT NULL,
  `sid` int(5) NOT NULL,
  `score` float NOT NULL,
  PRIMARY KEY (`scid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `score` WRITE;
/*!40000 ALTER TABLE `score` DISABLE KEYS */;

INSERT INTO `score` (`scid`, `cid`, `sid`, `score`)
VALUES
	(1,1,2,6),
	(2,1,3,8.5),
	(3,1,4,8.5),
	(4,1,5,8),
	(5,2,6,10),
	(6,2,7,10),
	(7,2,8,10),
	(8,2,9,10),
	(9,3,10,10),
	(10,3,11,8),
	(11,3,2,8),
	(12,3,3,8);

/*!40000 ALTER TABLE `score` ENABLE KEYS */;
UNLOCK TABLES;


# Dump of table studentinclass
# ------------------------------------------------------------

DROP TABLE IF EXISTS `studentinclass`;

CREATE TABLE `studentinclass` (
  `cid` int(5) NOT NULL,
  `sid` int(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `studentinclass` WRITE;
/*!40000 ALTER TABLE `studentinclass` DISABLE KEYS */;

INSERT INTO `studentinclass` (`cid`, `sid`)
VALUES
	(1,3),
	(1,4),
	(1,5),
	(2,7),
	(2,8),
	(1,2),
	(2,6),
	(2,9),
	(3,10),
	(3,11),
	(3,3),
	(3,2);

/*!40000 ALTER TABLE `studentinclass` ENABLE KEYS */;
UNLOCK TABLES;


# Dump of table user
# ------------------------------------------------------------

DROP TABLE IF EXISTS `user`;

CREATE TABLE `user` (
  `id` int(5) unsigned NOT NULL AUTO_INCREMENT,
  `passwd` varchar(16) NOT NULL,
  `name` varchar(50) NOT NULL,
  `level` tinyint(1) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `user` WRITE;
/*!40000 ALTER TABLE `user` DISABLE KEYS */;

INSERT INTO `user` (`id`, `passwd`, `name`, `level`)
VALUES
	(1,'123456','教师1',1),
	(2,'12345','学生1',0),
	(3,'12345','学生2',0),
	(4,'12345','学生3',0),
	(5,'12345','学生4',0),
	(6,'12345','学生5',0),
	(7,'12345','学生6',0),
	(8,'12345','学生7',0),
	(9,'12345','学生8',0),
	(10,'12345','学生9',0),
	(11,'12345','学生10',0);

/*!40000 ALTER TABLE `user` ENABLE KEYS */;
UNLOCK TABLES;



/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
