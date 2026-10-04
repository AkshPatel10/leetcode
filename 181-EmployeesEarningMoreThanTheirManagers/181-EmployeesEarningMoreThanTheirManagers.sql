-- Last updated: 04/10/2026, 17:11:29
# Write your MySQL query statement below
SELECT e.name AS Employee
FROM Employee e
JOIN Employee m
ON e.managerId = m.id
WHERE e.salary > m.salary;