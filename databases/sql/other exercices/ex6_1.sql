USE TP2_1;
SHOW TABLES;
INSERT INTO PROFESSEURs VALUES (130,'ahmed',40.000);
INSERT INTO PROFESSEURs VALUES (156,'zakaryae',50.000);
INSERT INTO PROFESSEURs VALUES (110,'walid',60.000);
INSERT INTO COURS VALUES(15,'fd',2),(17,'proba',6),(19,'python',4);
INSERT INTO ENSEIGNEMENT VALUES (15,6,110),(17,6,156),(19,6,110);

#on remarque erreur de foreign key lors de l'implimentation car on n'a pas remplis la table parent pour remplir la table enfant  
#on remarque que le table d'enseignement est remplis sans aucun problème

USE TP2_2;
UPDATE DEPARTEMENTS SET NODEPT = 100 WHERE NOMDEPT = 'Finance';
# on remarque qu'on a une erreur de foreign key constraint lorsqu'on veut modifier une valeur de la numéro de département 
#on peut changer la contraint de foreign key de la colonne numdept de ON UPDATE restrict vers UPDATE cascade ou UPDATE set null
SHOW CREATE TABLE EMPLOYEES;
ALTER TABLE EMPLOYEES
DROP FOREIGN KEY employees_ibfk_2,
ADD CONSTRAINT FOREIGN KEY(NODEPT) REFERENCES DEPARTEMENTS(NODEPT) ON UPDATE CASCADE;
UPDATE DEPARTEMENTS SET NODEPT = 100 WHERE NOMDEPT = 'Finance';
DELETE FROM EMPLOYEES WHERE NODEPT = 41;
#la même erreur qu'on dans la question 3 
#on peut changer la contraint de foreign key de la colonne NODEPT de ON DELETE RESTRICT VERS ON DELETE SET NULL
# ET ON PEUT PAR LA SUITE SUPPRIMER LA la valeur 41 du clé primaire NODEPT pour la mettez null (SET NULL) et on suite la suprimer par une requête delete
SHOW CREATE TABLE EMPLOYEES;
ALTER TABLE EMPLOYEES 
DROP FOREIGN KEY employees_ibfk_5,
ADD FOREIGN KEY(NODEPT) REFERENCES DEPARTEMENTS(NODEPT) ON UPDATE CASCADE ON DELETE SET NULL;

ALTER TABLE EMPLOYEES 
ADD FOREIGN KEY(NOSUP) REFERENCES EMPLOYEES(NOEMP) ON UPDATE SET NULL;