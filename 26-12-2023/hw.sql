-- Creating tables

CREATE TABLE Curators
(
    Id      INT PRIMARY KEY IDENTITY (1,1),
    Name    NVARCHAR(MAX) NOT NULL CHECK (Name <> ''),
    Surname NVARCHAR(MAX) NOT NULL CHECK (Surname <> '')
);

CREATE TABLE Departments
(
    Id        INT PRIMARY KEY IDENTITY (1,1),
    Financing MONEY         NOT NULL CHECK (Financing >= 0) DEFAULT 0,
    Name      NVARCHAR(100) NOT NULL UNIQUE CHECK (Name <> ''),
    FacultyId INT           NOT NULL,
    FOREIGN KEY (FacultyId) REFERENCES Faculties (Id)
);

CREATE TABLE Faculties
(
    Id        INT PRIMARY KEY IDENTITY (1,1),
    Financing MONEY         NOT NULL CHECK (Financing >= 0) DEFAULT 0,
    Name      NVARCHAR(100) NOT NULL UNIQUE CHECK (Name <> '')
);

CREATE TABLE Groups
(
    Id           INT PRIMARY KEY IDENTITY (1,1),
    Name         NVARCHAR(10) NOT NULL UNIQUE CHECK (Name <> ''),
    Year         INT          NOT NULL CHECK (Year BETWEEN 1 AND 5),
    DepartmentId INT          NOT NULL,
    FOREIGN KEY (DepartmentId) REFERENCES Departments (Id)
);

CREATE TABLE GroupsCurators
(
    Id        INT PRIMARY KEY IDENTITY (1,1),
    CuratorId INT NOT NULL,
    GroupId   INT NOT NULL,
    FOREIGN KEY (CuratorId) REFERENCES Curators (Id),
    FOREIGN KEY (GroupId) REFERENCES Groups (Id)
);

CREATE TABLE GroupsLectures
(
    Id        INT PRIMARY KEY IDENTITY (1,1),
    GroupId   INT NOT NULL,
    LectureId INT NOT NULL,
    FOREIGN KEY (GroupId) REFERENCES Groups (Id),
    FOREIGN KEY (LectureId) REFERENCES Lectures (Id)
);

CREATE TABLE Lectures
(
    Id          INT PRIMARY KEY IDENTITY (1,1),
    LectureRoom NVARCHAR(MAX) NOT NULL CHECK (LectureRoom <> ''),
    SubjectId   INT           NOT NULL,
    TeacherId   INT           NOT NULL,
    FOREIGN KEY (SubjectId) REFERENCES Subjects (Id),
    FOREIGN KEY (TeacherId) REFERENCES Teachers (Id)
);

CREATE TABLE Subjects
(
    Id   INT PRIMARY KEY IDENTITY (1,1),
    Name NVARCHAR(100) NOT NULL UNIQUE CHECK (Name <> '')
);

CREATE TABLE Teachers
(
    Id      INT PRIMARY KEY IDENTITY (1,1),
    Name    NVARCHAR(MAX) NOT NULL CHECK (Name <> ''),
    Salary  MONEY         NOT NULL CHECK (Salary > 0),
    Surname NVARCHAR(MAX) NOT NULL CHECK (Surname <> '')
);

-- Queries
SELECT t.Name AS TeacherName, t.Surname AS TeacherSurname, g.Name AS GroupName
FROM Teachers t,
     Groups g;
go;

SELECT f.Name AS FacultyName
FROM Faculties f
         JOIN Departments d ON f.Id = d.FacultyId
WHERE d.Financing > f.Financing;
go;

SELECT c.Surname AS CuratorSurname, g.Name AS GroupName
FROM Curators c
         JOIN GroupsCurators gc ON c.Id = gc.CuratorId
         JOIN Groups g ON gc.GroupId = g.Id;
go;

SELECT t.Name AS TeacherName, t.Surname AS TeacherSurname
FROM Teachers t
         JOIN Lectures l ON t.Id = l.TeacherId
         JOIN GroupsLectures gl ON l.Id = gl.LectureId
         JOIN Groups g ON gl.GroupId = g.Id
WHERE g.Name = 'P107';
go;

SELECT t.Surname AS TeacherSurname, f.Name AS FacultyName
FROM Teachers t
         JOIN Lectures l ON t.Id = l.TeacherId
         JOIN Departments d ON l.SubjectId = d.Id
         JOIN Faculties f ON d.FacultyId = f.Id;
go;

SELECT d.Name AS DepartmentName, g.Name AS GroupName
FROM Departments d
         JOIN Groups g ON d.Id = g.DepartmentId;
go;

SELECT s.Name AS SubjectName
FROM Teachers t
         JOIN Lectures l ON t.Id = l.TeacherId
         JOIN Subjects s ON l.SubjectId = s.Id
WHERE t.Name = 'Samantha'
  AND t.Surname = 'Adams';
go;

SELECT d.Name AS DepartmentName
FROM Departments d
         JOIN Lectures l ON d.Id = l.SubjectId
         JOIN Subjects s ON l.SubjectId = s.Id
WHERE s.Name = 'Database Theory';
go;

SELECT g.Name AS GroupName
FROM Groups g
         JOIN Departments d ON g.DepartmentId = d.Id
         JOIN Faculties f ON d.FacultyId = f.Id
WHERE f.Name = 'Computer Science';
go;

SELECT g.Name AS GroupName, f.Name AS FacultyName
FROM Groups g
         JOIN Departments d ON g.DepartmentId = d.Id
         JOIN Faculties f ON d.FacultyId = f.Id
WHERE g.Year = 5;
go;

SELECT t.Name AS TeacherName, t.Surname AS TeacherSurname, l.LectureRoom, s.Name AS SubjectName, g.Name AS GroupName
FROM Teachers t
         JOIN Lectures l ON t.Id = l.TeacherId
         JOIN Subjects s ON l.SubjectId = s.Id
         JOIN GroupsLectures gl ON l.Id = gl.LectureId
         JOIN Groups g ON gl.GroupId = g.Id
WHERE l.LectureRoom = 'B103';
go;
