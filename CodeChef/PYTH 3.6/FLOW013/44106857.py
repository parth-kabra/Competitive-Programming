#cook your dish here
for i in range(int(input())):
    a,b,c=list(map(int,input().split()))
    if (a+b+c==180):
        print("YES")
    else:
        print("NO")