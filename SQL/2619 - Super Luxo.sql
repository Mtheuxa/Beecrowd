SELECT p.name AS produto, prov.name AS fornecedor, p.price AS preço
FROM products p
INNER JOIN providers prov ON p.id_providers = prov.id
INNER JOIN categories cat ON p.id_categories = cat.id
WHERE p.price > 1000 AND cat.name = 'Super Luxury';