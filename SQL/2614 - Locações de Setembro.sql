SELECT c.name, r.rentals_date
FROM rentals r
INNER JOIN customers c ON r.id_customers = c.id
WHERE r.rentals_date BETWEEN '2016-09-01' AND '2016-09-30';