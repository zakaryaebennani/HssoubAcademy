SELECT teacher , subject FROM school ;

SELECT subject FROM school WHERE studentsnumber > 30 ;

SELECT subject , age FROM students ORDER BY age DESC ;

INSERT INTO students(Firstname , Lastname , age , class , subject) values("ali" , "mohammed ali" , 17 ,"twelve", "maths");

DELETE FROM students WHERE age > 20;

UPDATE students SET class = "eleven" WHERE class = "twelve";

SELECT class, count(class) FROM students GROUP BY calss;

SELECT Firstname, age as current_age , age+1 as ageNY FROM students;