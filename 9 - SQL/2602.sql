CREATE TABLE IF NOT EXISTS customers(
	id INT PRIMARY KEY,
	name VARCHAR(100),
	street VARCHAR(100),
	city VARCHAR(100),
	state CHAR(2),
	credit_limit INT
);


INSERT INTO customers (id, name, street, city, state, credit_limit)
VALUES (1, 'Pedro Augusto da Rocha', 'Rua Pedro Carlos Hoffman', 'Porto Alegre', 'RS', 700),
(2, 'Antonio Carlos Mamel', 'Av. Pinheiros', 'Belo Horizonte', 'MG', 3500.50),
(3, 'Luiza Augusta Mhor', 'Rua Salto Grande', 'Niteroi', 'RJ', 4000.00),
(4, 'Jane Ester', 'Av 7 de setembro', 'Erechim', 'RS', 800),
(5, 'Marcos Antônio dos Santos', 'Av Farrapos', 'Porto Alegre', 'RS', 4250.25);

SELECT name FROM customers WHERE state = 'RS';