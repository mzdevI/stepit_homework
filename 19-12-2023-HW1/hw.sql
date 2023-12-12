create TABLE Groups (
    Id int primary key IDENTITY (1, 1),
    Name nchar(10) not null unique CHECK(Name <> ' '),
    Rating int not null CHECK(Rating <= 5 and Rating >= 0),
    Year int not null CHECK(Year > 1 and Year < 5)
)

create Table Departments (
    Id int primary key IDENTITY (1, 1),
    Financing money not null CHECK(Financing >= 0) DEFAULT(0),
    Name nvarchar(100) not null unique CHECK(Name <> ' '),
)

create TABLE Faculties (
   Id int primary key IDENTITY (1, 1),
   Name nvarchar(100) not null unique CHECK(Name <> ' '),

)

create TABLE Teachers (
    Id int primary key IDENTITY (1, 1),
    EmploymentDate date not null CHECK(EmploymentDate > '01.01.1990'),
    Name nvarchar(100) not null unique CHECK(Name <> ' '),
    Premium money not null CHECK(Premium >= 0) DEFAULT(0),
    Salary money not null CHECK(Salary > 0),
    Surname nvarchar(max) not null CHECK(Surname <> ' '),
)
