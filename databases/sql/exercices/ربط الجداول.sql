DROP DATABASE if exists Bank; 
create database bank;
USE Bank;
create table Customers (CustomerID BIGint PRIMARY KEY, NameCT Varchar(50), Remaining BIGINT);
insert into Customers Values 
               (1111, "Hassan", 5000),
			   (2222, "Hiba", 6000),
               (3333, "Mohamad", 7500),
               (4444, "Hiba", 10000),
               (5555, "Ibrahim", 2000),
               (6666, "Ahmad", 5000),
               (7777, "Hasan", 4500);
CREATE TABLE INSTALLMENTS (TransactionID int Primary KEY  auto_increment, Amount BIGINT, CustomerID BIGINT,DATES VARCHAR(50),
FOREIGN KEY (CustomerID) REFERENCES Customers(CustomerID));
ALTER TABLE INSTALLMENTS auto_increment=1;
INSERT INTO INSTALLMENTS (Amount, CustomerID, DATES) VALUES
                                (450, 1111, "05-OCT-2020"),
                                (300, 2222, "09-NOV-2020"),
                                (700, 1111, "05-JUN-2020"),
                                (300, 3333, "15-OCT-2020"),
                                (500, 4444, "05-NOV-2020"),
                                (450, 5555, "05-NOV-2020"),
                                (350, 6666, "20-JUN-2020"),
                                (250, 7777, "05-NOV-2020"),
                                (150, 6666, "08-JUL-2020"),
                                (400, 5555, "25-NOV-2020"),
                                (700, 2222, "02-OCT-2020");

UPDATE CUSTOMERS SET Remaining = Remaining - (SELECT Amount FROM INSTALLMENTS WHERE INSTALLMENTS.CustomerID = CUSTOMERS.CustomerID);