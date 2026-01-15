1# Write your MySQL query statement below
2select s.name as Employee
3from employee as s
4inner join employee as y
5    on s.managerId = y.id
6where s.salary > y.salary
7;