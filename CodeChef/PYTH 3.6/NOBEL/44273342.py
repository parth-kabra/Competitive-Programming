for i in range(int(input())):
    n,m=list(map(int,input().split()))
    a=set(map(int,input().split()))
    if len(a)<m:
        print("YES")
    elif len(a)==m:
        print("NO")
    elif len(a)>m:
        print("NO")