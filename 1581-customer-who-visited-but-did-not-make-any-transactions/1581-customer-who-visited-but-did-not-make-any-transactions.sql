# Write your MySQL query statement below
# select customer_id, count(customer_id) as "count_no_trans"
# from Visits where visit_id not in(select visit_id from Transactions)
# group by customer_id;

select v.customer_id,count(v.visit_id) as count_no_trans from visits v
left join transactions t
on v.visit_id = t.visit_id
where t.transaction_id is null or t.amount is null
group by customer_id order by count_no_trans desc;