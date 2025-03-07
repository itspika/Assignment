CREATE DATABASE ecart;
Use ecart;

CREATE TABLE product (
pcode int primary key,
pname varchar (50) not null unique, 
quantity int not null,
unitprice float not null,
productadddate date not null,
lastpurchasedate date,
lastsaledate date
);

DESC product;

CREATE TABLE transact (
tcode int primary key auto_increment,
tdate date not null,
pcode int not null ,
quantity int not null,
unitprice float not null, 
ttype char(1) not null,
CONSTRAINT chk_ttype CHECK (ttype IN ('S', 'P')),
foreign key (pcode) REFERENCES product(pcode)
);

DESC transact;

INSERT INTO product (pcode, pname, quantity, unitprice, productadddate) VALUES
(101, 'Samsung TV', 9, 23000, '2023-09-23'),
(102, 'LG Mobile', 12, 12400, '2023-12-10'),
(103, 'Washing Machine', 15, 17900, '2024-01-12');

select * from product;

INSERT INTO transact (tdate, pcode, quantity, unitprice, ttype) VALUES
('2024-01-15', 101,3, 24500, 'S');

UPDATE product
SET quantity=quantity-3, lastsaledate= '2024-01-15'
WHERE pcode= 101;

INSERT INTO transact (tdate, pcode, quantity, unitprice, ttype) VALUES
('2024-01-16', 102,5, 14500, 'S');

UPDATE product
SET quantity=quantity-5, lastsaledate= '2024-01-16'
WHERE pcode= 102;

INSERT INTO transact (tdate, pcode, quantity, unitprice, ttype) VALUES
('2025-01-17', 101, 2, 23400, 'P');

UPDATE product
SET quantity=quantity+2, lastpurchasedate= '2024-01-17'
WHERE pcode= 101;

INSERT INTO transact (tdate, pcode, quantity, unitprice, ttype) VALUES
('2025-01-18', 102, 3, 13100, 'P');

UPDATE product
SET quantity=quantity+3, lastpurchasedate= '2024-01-18'
WHERE pcode= 102;

-- Show all records in Products table
SELECT * FROM Products;

-- Show all records in Transaction table
SELECT * FROM Transaction;

-- Total sale and purchase by product name
SELECT 
    p.pname, 
    SUM(CASE WHEN t.ttype = 'S' THEN t.quantity * t.unitprice ELSE 0 END) AS total_sale,
    SUM(CASE WHEN t.ttype = 'P' THEN t.quantity * t.unitprice ELSE 0 END) AS total_purchase
FROM 
    Products p
JOIN 
    Transaction t ON p.pcode = t.pcode
GROUP BY 
    p.pname;

select * from product;
select * from transact;
drop table transact;
