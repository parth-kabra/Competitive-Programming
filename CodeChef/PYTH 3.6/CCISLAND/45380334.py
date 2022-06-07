# cook your dish here
for i in range(int(input())):
    x,y,x1,y1,d=list(map(int,input().split()))
    l=[]
    l.append(x/x1)
    l.append(y/y1)
    MIN=min(l)
    if MIN>=d:
        print("YES")
    else:
        print("NO")