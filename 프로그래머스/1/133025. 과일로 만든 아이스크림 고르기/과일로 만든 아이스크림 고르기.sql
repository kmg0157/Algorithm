-- 코드를 입력하세요
SELECT a.FlAVOR
FROM FIRST_HALF a
JOIN ICECREAM_INFO b ON a.FLAVOR=b.FLAVOR
WHERE a.TOTAL_ORDER>3000 AND b.INGREDIENT_TYPE='fruit_based'