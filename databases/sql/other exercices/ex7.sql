USE TP2_2;
SELECT * from EMPLOYEES ;
SELECT * FROM DEPARTEMENTS;
SELECT NOMEMP,DATEEMBAUCHE,NOSUP,NODEPT,SALAIRE FROM EMPLOYEES;
SELECT TITRE FROM EMPLOYEES;
SELECT DISTINCT TITRE FROM EMPLOYEES;
SELECT NOMEMP,NOEMP,NODEPT FROM EMPLOYEES WHERE TITRE = "secrétaire";
SELECT NOMDEPT,NODEPT FROM DEPARTEMENTS WHERE NODEPT >40;
SELECT NOMEMP,PRENOMEMP FROM EMPLOYEES WHERE NOMEMP < PRENOMEMP;
SELECT NOMEMP, SALAIRE, NODEPT FROM EMPLOYEES WHERE TITRE = "Représentant" AND NODEPT = 35 AND SALAIRE > 20000;
SELECT NOMEMP,TITRE, SALAIRE FROM EMPLOYEES WHERE TITRE IN ("Représentant","Président");
SELECT NOMEMP, TITRE, NODEPT, SALAIRE FROM EMPLOYEES WHERE NODEPT =34 AND TITRE IN ("Représentant","Secrétaire");
SELECT NOMEMP, TITRE, NODEPT, SALAIRE FROM EMPLOYEES WHERE TITRE = "Représentant" OR (TITRE = "Secrétaire" AND NODEPT = 34) ;
SELECT NOMEMP, SALAIRE FROM EMPLOYEES WHERE SALAIRE BETWEEN 20000 AND 30000 ;
SELECT NOMEMP FROM EMPLOYEES WHERE NOMEMP LIKE 'H%';
SELECT NOMEMP FROM EMPLOYEES WHERE NOMEMP LIKE '%n';
SELECT NOMEMP FROM EMPLOYEES WHERE NOMEMP LIKE '__u%';
SELECT SALAIRE,NOMEMP FROM EMPLOYEES WHERE NODEPT = 41 ORDER BY SALAIRE;
SELECT SALAIRE,NOMEMP FROM EMPLOYEES WHERE NODEPT = 41 ORDER BY SALAIRE DESC;
SELECT TITRE,SALAIRE,NOMEMP FROM EMPLOYEES ORDER BY TITRE ASC, SALAIRE DESC;
SELECT COMMISSION, SALAIRE, NOMEMP FROM EMPLOYEES ORDER BY COMMISSION;
SELECT NOMEMP, SALAIRE, COMMISSION , TITRE FROM EMPLOYEES WHERE COMMISSION IS  NULL;
SELECT NOMEMP, SALAIRE, COMMISSION , TITRE FROM EMPLOYEES WHERE COMMISSION IS NOT NULL;
SELECT NOMEMP, SALAIRE, COMMISSION, TITRE FROM EMPLOYEES WHERE  COMMISSION <15;
SELECT NOMEMP, SALAIRE, COMMISSION, TITRE FROM EMPLOYEES WHERE COMMISSION > 15;
SELECT NOMEMP, SALAIRE, ((COMMISSION/100) * SALAIRE) AS COMM FROM EMPLOYEES WHERE COMMISSION IS NOT NULL;
SELECT NOMEMP, SALAIRE, ((COMMISSION/100) * SALAIRE) AS COMM FROM EMPLOYEES WHERE COMMISSION IS NOT NULL ORDER BY
COMMISSION;