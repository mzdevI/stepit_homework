CREATE TABLE Departments
(
    Id        INT           NOT NULL PRIMARY KEY IDENTITY (1,1),
    Financing MONEY         NOT NULL DEFAULT 0,
    Name      NVARCHAR(100) NOT NULL UNIQUE,
    FacultyId INT           NOT NULL FOREIGN KEY REFERENCES Faculties (Id)
);

CREATE TABLE Faculties
(
    Id   INT           NOT NULL PRIMARY KEY IDENTITY (1,1),
    Name NVARCHAR(100) NOT NULL UNIQUE
);

CREATE TABLE Groups
(
    Id           INT          NOT NULL PRIMARY KEY IDENTITY (1,1),
    Name         NVARCHAR(10) NOT NULL UNIQUE,
    Year         INT          NOT NULL CHECK (Year BETWEEN 1 AND 5),
    DepartmentId INT          NOT NULL FOREIGN KEY REFERENCES Departments (Id)
);

CREATE TABLE GroupsLectures
(
    Id        INT NOT NULL PRIMARY KEY IDENTITY (1,1),
    GroupId   INT NOT NULL FOREIGN KEY REFERENCES Groups (Id),
    LectureId INT NOT NULL FOREIGN KEY REFERENCES Lectures (Id)
);

CREATE TABLE Lectures
(
    Id          INT           NOT NULL PRIMARY KEY IDENTITY (1,1),
    DayOfWeek   INT           NOT NULL CHECK (DayOfWeek BETWEEN 1 AND 7),
    LectureRoom NVARCHAR(MAX) NOT NULL,
    SubjectId   INT           NOT NULL FOREIGN KEY REFERENCES Subjects (Id),
    TeacherId   INT           NOT NULL FOREIGN KEY REFERENCES Teachers (Id)
);

CREATE TABLE Subjects
(
    Id   INT           NOT NULL PRIMARY KEY IDENTITY (1,1),
    Name NVARCHAR(100) NOT NULL UNIQUE
);

CREATE TABLE Teachers
(
    Id      INT           NOT NULL PRIMARY KEY IDENTITY (1,1),
    Name    NVARCHAR(MAX) NOT NULL,
    Salary  MONEY         NOT NULL CHECK (Salary > 0),
    Surname NVARCHAR(MAX) NOT NULL
);


SELECT COUNT(*) AS TeacherCount
FROM Teachers t
         JOIN Departments d ON t.Id = d.Id
WHERE d.Name = 'Software Development';
go;

SELECT COUNT(*) AS LectureCount
FROM Lectures l
         JOIN Teachers t ON l.TeacherId = t.Id
WHERE t.Name = 'Dave McQueen';
go;

SELECT COUNT(*) AS LectureCount
FROM Lectures
WHERE LectureRoom = 'D201';
go;

SELECT LectureRoom, COUNT(*) AS LectureCount
FROM Lectures
GROUP BY LectureRoom;
go;

SELECT COUNT(DISTINCT g.Id) AS StudentCount
FROM Groups g
         JOIN GroupsLectures gl ON g.Id = gl.GroupId
         JOIN Lectures l ON gl.LectureId = l.Id
         JOIN Teachers t ON l.TeacherId = t.Id
WHERE t.Name = 'Jack Underhill';
go;

SELECT AVG(Salary) AS AverageSalary
FROM Teachers t
         JOIN Departments d ON t.Id = d.Id
         JOIN Faculties f ON d.FacultyId = f.Id
WHERE f.Name = 'Computer Science';
go;

SELECT MIN(StudentCount) AS MinStudents, MAX(StudentCount) AS MaxStudents
FROM (SELECT COUNT(*) AS StudentCount FROM Groups GROUP BY Id) AS GroupCounts;
go;

SELECT AVG(Financing) AS AverageFinancing
FROM Departments;
go;

SELECT CONCAT(Name, ' ', Surname) AS FullName, COUNT(DISTINCT SubjectId) AS SubjectCount
FROM Teachers t
         JOIN Lectures l ON t.Id = l.TeacherId
GROUP BY t.Id, Name, Surname;
go;

SELECT DayOfWeek, COUNT(*) AS LectureCount
FROM Lectures
GROUP BY DayOfWeek;
go;

SELECT LectureRoom, COUNT(DISTINCT d.Id) AS DepartmentCount
FROM Lectures l
         JOIN Departments d ON l.TeacherId = d.Id
GROUP BY LectureRoom;
go;

SELECT f.Name AS FacultyName, COUNT(DISTINCT s.Id) AS SubjectCount
FROM Faculties f
         JOIN Departments d ON f.Id = d.FacultyId
         JOIN Groups g ON d.Id = g.DepartmentId
         JOIN GroupsLectures gl ON g.Id = gl.GroupId
         JOIN Lectures l ON gl.LectureId = l.Id
         JOIN Subjects s ON l.SubjectId = s.Id
GROUP BY f.Id, f.Name;
go;
