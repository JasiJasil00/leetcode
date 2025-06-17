# Write your MySQL query statement below
select e.firstName,e.lastName,d.city,d.state
from Person e 
LEFT JOIN Address d ON e.personId=d.personId