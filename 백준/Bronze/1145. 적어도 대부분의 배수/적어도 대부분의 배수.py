import math
from itertools import combinations

def lcm(a,b):
    return a*b//math.gcd(a,b)

num=list(map(int,input().split()))
num.sort()

min_lcm=999999999
for comb in combinations(num,3):
    cur=lcm(lcm(comb[0],comb[1]),comb[2])
    min_lcm=min(min_lcm,cur)

print(min_lcm)