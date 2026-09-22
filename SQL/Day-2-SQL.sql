-- DAY 2 - SQL BASICS

-- SELECT
SELECT * FROM students;

SELECT name, mark
FROM students;

-- WHERE
SELECT *
FROM students
WHERE mark > 80;

SELECT *
FROM students
WHERE department = 'AI&DS';

-- AND / OR
SELECT *
FROM students
WHERE mark > 85 AND age = 20;

-- ORDER BY
SELECT *
FROM students
ORDER BY mark DESC;

-- LIMIT
SELECT *
FROM students
ORDER BY mark DESC
LIMIT 3;

-- AGGREGATE FUNCTIONS

SELECT COUNT(*)
FROM students;

SELECT SUM(mark)
FROM students;

SELECT AVG(mark)
FROM students;

SELECT MAX(mark)
FROM students;

SELECT MIN(mark)
FROM students;

-- GROUP BY

SELECT department, COUNT(*)
FROM students
GROUP BY department;

SELECT department, AVG(mark)
FROM students
GROUP BY department;

SELECT department, MAX(mark)
FROM students
GROUP BY department;