1SELECT v.customer_id, COUNT(*) AS count_no_trans
2FROM Visits v
3WHERE NOT EXISTS (
4    SELECT 1
5    FROM Transactions t
6    WHERE t.visit_id = v.visit_id
7)
8GROUP BY v.customer_id;