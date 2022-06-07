#cook your dish here
a,b,c=list(map(int,input().split()))
if ((a==b)or(b==a))or((a==c)or(c==a))or((b==c)or(c==b)):
    print("YES")
else:
    print("NO")