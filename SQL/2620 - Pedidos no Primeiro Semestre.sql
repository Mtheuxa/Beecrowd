SELECT c.name AS cliente, o.id AS numero_do_pedido
FROM customers c
INNER JOIN orders o ON c.id = o.id_customers
WHERE o.orders_date BETWEEN '2016-01-01' AND '2016-06-30';