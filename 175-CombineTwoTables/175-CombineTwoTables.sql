-- Last updated: 17/08/2026, 09:30:56
# Write your MySQL query statement below
select p.firstName, p.lastName, a.city, a.state
from Person p
LEFT JOIN address a ON p.personId = a.personId