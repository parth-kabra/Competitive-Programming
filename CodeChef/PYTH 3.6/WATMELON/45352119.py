for i in range(int(input())):
    n=int(input());s=list(map(int,input().split()))
    if sum(s)>=0:print("YES")
    else:print("NO")