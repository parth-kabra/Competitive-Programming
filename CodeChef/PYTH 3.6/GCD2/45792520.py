from math import gcd as g
for i in range(int(input())):
    a,b=list(map(int,input().split()))
    print(g(a,b))