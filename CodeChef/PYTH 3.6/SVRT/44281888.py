#cook your dish here
import math
for i in range(int(input())):
    n,k=list(map(int,input().split()))
    ceil=(math.ceil(n/k))
    sec=0
    if (n%k==0):
        sec=k
    else:
        sec=(n%k)
    print(ceil,sec)