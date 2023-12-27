CREATE TABLE Students (
    StudentID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Age INT,
    GPA FLOAT
);

CREATE TABLE Courses (
    CourseID INT PRIMARY KEY,
    CourseName VARCHAR(50),
    Difficulty INT,
    Credits INT
);

CREATE TABLE Enrollments (
    EnrollmentID INT PRIMARY KEY,
    StudentID INT,
    CourseID INT,
    Grade FLOAT
);


SELECT AVG(s.GPA) AS AverageGPA
FROM Students as s
JOIN Enrollments e ON s.StudentID = e.StudentID
WHERE e.CourseID = 101;
go;

SELECT MAX(s.Age) AS MaxAge
FROM Students as s
JOIN Enrollments e ON s.StudentID = e.StudentID
WHERE e.Grade > 3.5;
go;

SELECT COUNT(*) AS CourseCount
FROM Courses
WHERE Difficulty > 3;
go;

SELECT c.CourseName, AVG(e.Grade) AS AverageGrade
FROM Courses as c
JOIN Enrollments e ON c.CourseID = e.CourseID
GROUP BY c.CourseName;
go;

SELECT TOP 1 CourseName
FROM Courses
ORDER BY Difficulty DESC;
go;
