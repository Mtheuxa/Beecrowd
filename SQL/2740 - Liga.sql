SELECT 
    CONCAT('Podium: ', team) AS name
FROM 
    league
WHERE 
    position <= 3
UNION ALL
SELECT 
    CONCAT('Demoted: ', team) AS name
FROM 
    league
WHERE 
    position > (SELECT MAX(position) - 2 FROM league);