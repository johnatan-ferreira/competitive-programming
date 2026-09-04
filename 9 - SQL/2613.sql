CREATE TABLE IF NOT EXISTS prices(
	id INT PRIMARY KEY,
	categorie VARCHAR(100),
	value REAL
);

CREATE TABLE IF NOT EXISTS movies(
	id INT PRIMARY KEY,
	name VARCHAR(100),
	id_prices INT,
	FOREIGN KEY (id_prices) REFERENCES prices(id)
);

INSERT INTO prices(id, categorie, value)
VALUES 	(1, 'Releases', 3.5),
		(2, 'Bronze Seal', 2),
		(3, 'Silver Seal', 2.5),
		(4, 'Gold Seal', 3),
		(5, 'Promotion', 1.5);

INSERT INTO movies(id, name, id_prices)
VALUES 	(1, 'Batman', 3),
		(2, 'The Battle of the Dark River', 3),
		(3, 'White Duck', 5),
		(4, 'Breaking Barriers', 4),
		(5, 'The Two Hours', 2);

SELECT movies.id, movies.name
FROM movies
INNER JOIN prices ON movies.id_prices = prices.id
WHERE prices.value < 2;