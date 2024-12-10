SELECT 
    p.name AS product_name, 
    prov.name AS provider_name, 
    cat.name AS category_name
FROM 
    products p
JOIN 
    providers prov ON p.id_providers = prov.id
JOIN 
    categories cat ON p.id_categories = cat.id
WHERE 
    prov.name = 'Sansul SA' 
    AND cat.name = 'Imported';
