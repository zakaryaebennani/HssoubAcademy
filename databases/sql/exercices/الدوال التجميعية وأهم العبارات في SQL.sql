SELECT Name, Color, min(Price) as Price FROM Market
WHERE year = 2020
GROUP BY Name;

SELECT Name, Color, max(Price) as Price FROM Market
WHERE year = 2020
GROUP BY Name;

SELECT ConsumerName, Name, count(*) AS Num FROM Market 
Where year =2020
GROUP BY ConsumerName, Name;