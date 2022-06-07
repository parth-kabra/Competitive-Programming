# cook your dish here
for i in range(int(input())):
    n=int(input())
    a=sorted(list(map(int,input().split())))
    MIN=(10**9)+7
    for j in range(1,n):
        MIN=min(MIN,a[j]-a[j-1])
    print(MIN)