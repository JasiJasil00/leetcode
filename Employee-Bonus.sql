# Write your MySQL query statement below
SELECT e.name, d.bonus
FROM Employee e 
LEFT JOIN Bonus d ON e.empId = d.empId
WHERE d.bonus<1000 || d.bonus IS NULL