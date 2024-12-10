SELECT p.name AS product_name, pr.name AS provider_name
FROM products p
INNER JOIN providers pr ON p.id_providers = pr.id
INNER JOIN categories c ON p.id_categories = c.id
WHERE c.id = 6;

