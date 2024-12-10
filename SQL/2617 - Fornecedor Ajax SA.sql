SELECT p.name AS produto, prov.name AS fornecedor
FROM products p
INNER JOIN providers prov ON p.id_providers = prov.id
WHERE prov.name = 'Ajax SA';