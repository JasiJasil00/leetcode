1# Write your MySQL query statement below
2select e.firstName,e.lastName,d.city,d.state
3from Person e 
4left JOIN Address d 
5ON e.personId=d.personId