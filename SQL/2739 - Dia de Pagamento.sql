SELECT 
    name AS nome,
    EXTRACT(DAY FROM payday)::INTEGER AS dia
FROM 
    loan;