CREATE TABLE CEO (
    CEOID INT PRIMARY KEY,
    FirstName VARCHAR(10),
    LastName VARCHAR(15),
    DateOfBirth DATE,
    ContactNum VARCHAR(20),
    Email VARCHAR(100)
);

CREATE TABLE Customer (
    CustomerID INT PRIMARY KEY,
    FirstName VARCHAR(10),
    LastName VARCHAR(15),
    DateOfBirth DATE,
    Address VARCHAR(255),
    ContactNumber VARCHAR(20),
    Email VARCHAR(100)
);

CREATE TABLE Account (
    AccountNumber INT PRIMARY KEY,
    CustomerID INT,
    AccountType VARCHAR(50),
    Balance DECIMAL(10, 2),
    OpenDate DATE,
    FOREIGN KEY (CustomerID) REFERENCES Customer(CustomerID)
);

CREATE TABLE Transactions (
    TransactionsID INT PRIMARY KEY,
    TransactionsType VARCHAR(50),
    Amount DECIMAL(10, 2),
    TransactionsDate DATE
);

CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(10),
    LastName VARCHAR(15),
    Position VARCHAR(50),
    Department VARCHAR(50),
    ContactNumber VARCHAR(20),
    Email VARCHAR(100),
    CEOID INT,
    FOREIGN KEY (CEOID) REFERENCES CEO(CEOID)
);

CREATE TABLE CustomerTransactions (
    CustomerID INT,
    TransactionsID INT,
    PRIMARY KEY (CustomerID, TransactionsID),
    FOREIGN KEY (CustomerID) REFERENCES Customer(CustomerID),
    FOREIGN KEY (TransactionsID) REFERENCES Transactions(TransactionsID)
);

CREATE TABLE EmployeeCustomer (
    EmployeeID INT,
    CustomerID INT,
    PRIMARY KEY (EmployeeID, CustomerID),
    FOREIGN KEY (EmployeeID) REFERENCES Employee(EmployeeID),
    FOREIGN KEY (CustomerID) REFERENCES Customer(CustomerID)
);

CREATE TABLE AccountTransactions (
    AccountNumber INT,
    TransactionsID INT,
    PRIMARY KEY (AccountNumber, TransactionsID),
    FOREIGN KEY (AccountNumber) REFERENCES Account(AccountNumber),
    FOREIGN KEY (TransactionsID) REFERENCES Transactions(TransactionsID)
);
