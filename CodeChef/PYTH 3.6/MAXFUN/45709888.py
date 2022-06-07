# cook your dish here
for i in range(int(input())):
    n=int(input())
    s=list(map(int,input().split()))
    s.sort()
    x=s[0];
    y=s[-1]
    z=s[1]
    result=abs(x-y)+abs(y-z)+abs(z-x)
    print(result)