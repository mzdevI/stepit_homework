create Table Departments
(
    Id        int primary key IDENTITY (1, 1),
    Financing money         not null CHECK (Financing >= 0) DEFAULT (0),
    Name      nvarchar(100) not null unique CHECK (Name <> ' '),
)

create TABLE Faculties
(
    Id   int primary key IDENTITY (1, 1),
    Dean nvarchar(max) not null Check (Dean <> ' '),
    Name nvarchar(100) not null unique CHECK (Name <> ' '),
)

create TABLE Groups
(
    Id     int primary key IDENTITY (1, 1),
    Name   nchar(10) not null unique CHECK (Name <> ' '),
    Rating int       not null CHECK (Rating <= 5 and Rating >= 0),
    Year   int       not null CHECK (Year > 1 and Year < 5)
)

create TABLE Teachers
(
    Id             int primary key IDENTITY (1, 1),
    EmploymentDate date          not null CHECK (EmploymentDate > '01.01.1990'),
    IsAssistant    bit           not null                      DEFAULT (0),
    IsProfessor    bit           not null                      DEFAULT (0),
    Name           nvarchar(max) not null unique CHECK (Name <> ' '),
    Position       nvarchar(max) not null CHECK (Position <> ' '),
    Premium        money         not null CHECK (Premium >= 0) DEFAULT (0),
    Salary         money         not null CHECK (Salary > 0),
    Surname        nvarchar(max) not null CHECK (Surname <> ' '),
)

SELECT *
FROM Departments
ORDER BY Id DESC;
go;

SELECT Name, Rating
FROM Groups;
go;

SELECT Surname,
       Premium * 100 / (Salary + Premium) AS PremiumPercentage,
       Salary * 100 / (Salary + Premium)  AS SalaryPercentage
FROM Teachers;
go;

SELECT 'The dean of faculty ' + Name + ' is ' + Dean + '.' AS FacultyInfo
FROM Faculties;
go;

SELECT Surname
FROM Teachers
WHERE IsProfessor = True
  AND Salary > 1050;
go;

SELECT Name
FROM Departments
WHERE Financing < 11000
   OR Financing > 25000;
go;

SELECT Name
FROM Faculties
WHERE Name <> 'Computer Science';
go;

SELECT Surname, Position
FROM Teachers
WHERE IsProfessor = False;
go;

SELECT Surname, Position, Salary, Premium
FROM Teachers
where IsAssistant = True
  and Salary >= 160
  and Salary < 550;
go;

SELECT Surname, Position
FROM Teachers
where IsAssistant = True;
go;

SELECT Surname, Position
FROM Teachers
where EmploymentDate > '01.01.2000';
go;

SELECT Name AS "Name of Department"
FROM Departments
WHERE Name < 'Software Development'
ORDER BY Name;
go;

SELECT Surname
FROM Teachers
WHERE IsAssistant = 1
  AND (Salary + Premium) <= 1200;
go;

SELECT Name
FROM Groups
WHERE Year = 5
  AND Rating BETWEEN 2 AND 4;
go;

SELECT Surname
FROM Teachers
WHERE IsAssistant = 1
  AND (Salary < 550 OR Premium < 200);
go;
