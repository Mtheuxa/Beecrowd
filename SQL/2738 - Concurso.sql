SELECT 
    c.name AS nome,
    ROUND(((s.math * 2) + (s.specific * 3) + (s.project_plan * 5)) / 10.0, 2) AS media
FROM 
    candidate c
JOIN 
    score s
ON 
    c.id = s.candidate_id
ORDER BY 
    media DESC;