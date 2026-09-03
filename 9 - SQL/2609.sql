CREATE TABLE IF NOT EXISTS categories(
	id INT PRIMARY KEY,
	name VARCHAR(100)
);

CREATE TABLE IF NOT EXISTS products(
	id INT PRIMARY KEY,
	name VARCHAR(100),
	amount FLOAT,
	price FLOAT,
	id_categories INT,
	FOREIGN KEY (id_categories) REFERENCES categories(id)
);

INSERT INTO products(id, name, amount, price, id_categories)
VALUES 	(1, 'Two-doors wardrobe', 100, 800, 1),
		(2, 'Dining table', 1000, 560, 3),
		(3, 'Towel holder', 10000, 25.50, 4),
		(4, 'Computer desk', 350, 320.50, 2),
		(5, 'Chair', 3000, 210.64, 4),
		(6, 'Single bed', 750, 460, 1);

INSERT INTO categories(id, name)
VALUES 	(1, 'wood'),
		(2, 'luxury'),
		(3, 'vintage'),
		(4, 'modern'),
		(5, 'super luxury');

SELECT categories.name, sum(products.amount)
FROM categories
INNER JOIN products ON categories.id = products.id_categories
GROUP BY categories.name;