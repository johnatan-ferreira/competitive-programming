CREATE TABLE IF NOT EXISTS providers(
	id INT PRIMARY KEY,
	name VARCHAR(100),
	street VARCHAR(100),
	city VARCHAR(100),
	state char(2)
);

CREATE TABLE IF NOT EXISTS categories(
	id INT PRIMARY KEY,
	name VARCHAR(100)
);

CREATE TABLE IF NOT EXISTS products(
	id INT PRIMARY KEY,
	name VARCHAR(100),
	amount INT,
	price INT,
	id_providers INT,
	id_categories INT,
	FOREIGN KEY (id_providers) REFERENCES providers(id),
	FOREIGN KEY (id_categories) REFERENCES categories(id)
);

INSERT INTO products(id, name, amount, price, id_providers, id_categories)
VALUES 	(1, 'Two-door wardrobe', 100, 800, 6, 8),
		(2, 'Dining table', 1000, 560, 1, 9),
		(3, 'Towel holder', 10000, 25.5, 5, 1),
		(4, 'Computer desk', 350, 350.5, 4, 6),
		(5, 'Chair', 3000, 210.64, 3, 6),
		(6, 'Single bed', 750, 460, 1, 2);

INSERT INTO providers(id, name, street, city, state)
VALUES 	(1, 'Henrique', 'Av Brasil', 'Rio de Janeiro', 'RJ'),
		(2, 'Marcelo Augusto', 'Rua Imigrantes', 'Belo Horizonte', 'RJ'),
		(3, 'Caroline Silva', 'Av São Paulo', 'Salvador', 'BA'),
		(4, 'Guilerme Staff', 'Rua Central', 'Porto Alegre', 'RS'),
		(5, 'Isabela Moraes', 'Av Juiz Grande', 'Curitiba', 'PR'),
		(6, 'Francisco Accerr', 'Av Paulista', 'São Paulo', 'SP');

INSERT INTO categories(id, name)
VALUES 	(1, 'old stock'),
		(2, 'new stock'),
		(3, 'modern'),
		(4, 'commercial'),
		(5, 'recyclable'),
		(6, 'executive'),
		(7, 'superior'),
		(8, 'wood'),
		(9, 'super luxury'),
		(10, 'vintage');

SELECT products.name, providers.name
FROM products
INNER JOIN providers ON products.id_providers = providers.id
WHERE products.id_categories = 6;