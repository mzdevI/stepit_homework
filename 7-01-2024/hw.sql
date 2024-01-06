CREATE TABLE Cars
(
    car_id       INT PRIMARY KEY IDENTITY (1,1),
    brand        NVARCHAR(255),
    model        NVARCHAR(255),
    year         INT,
    fuel_type_id INT FOREIGN KEY REFERENCES FuelTypes (fuel_type_id),
    body_type_id INT FOREIGN KEY REFERENCES BodyTypes (body_type_id),
    color_id     INT FOREIGN KEY REFERENCES Colors (color_id),
    image_link   NVARCHAR(MAX)
);

CREATE TABLE Users
(
    user_id  INT PRIMARY KEY IDENTITY (1,1),
    username NVARCHAR(50),
    password NVARCHAR(50),
    email    NVARCHAR(255)
);

CREATE TABLE ProductList
(
    product_id INT PRIMARY KEY IDENTITY (1,1),
    car_id     INT FOREIGN KEY REFERENCES Cars (car_id),
    seller_id  INT FOREIGN KEY REFERENCES Sellers (seller_id),
    price      DECIMAL(18, 2),
    quantity   INT
);

CREATE TABLE ManufacturingCountries
(
    country_id   INT PRIMARY KEY IDENTITY (1,1),
    country_name NVARCHAR(100)
);

CREATE TABLE FuelTypes
(
    fuel_type_id INT PRIMARY KEY IDENTITY (1,1),
    fuel_type    NVARCHAR(50)
);

CREATE TABLE BodyTypes
(
    body_type_id INT PRIMARY KEY IDENTITY (1,1),
    body_type    NVARCHAR(50)
);

CREATE TABLE Colors
(
    color_id   INT PRIMARY KEY IDENTITY (1,1),
    color_name NVARCHAR(50)
);

CREATE TABLE Sellers
(
    seller_id      INT PRIMARY KEY IDENTITY (1,1),
    user_id        INT FOREIGN KEY REFERENCES Users (user_id),
    company_name   NVARCHAR(255),
    contact_number NVARCHAR(20),
    country_id     INT FOREIGN KEY REFERENCES ManufacturingCountries (country_id),
    rating         INT
);
