-- Last updated: 17/08/2026, 09:30:53
# Write your MySQL query statement below
SELECT email
FROM Person
GROUP BY email
HAVING COUNT(email) > 1;