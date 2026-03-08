1# Write your MySQL query statement below
2select EmployeeUNI.unique_id, Employees.name
3from Employees
4left join EmployeeUNI
5on Employees.id = EmployeeUNI.id