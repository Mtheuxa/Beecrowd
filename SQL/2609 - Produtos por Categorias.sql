SELECT c.name AS categoria, SUM(p.amount) AS quantidade
FROM products p
INNER JOIN categories c ON p.id_categories = c.id
GROUP BY c.name;