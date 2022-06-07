#cook your dish here
for i in range(int(input())):
    a,b,c=list(map(int,input().split()))
    if(c>b and ((a-b*60+(c-b)*60)>=0)):
        print("YES")
    else:
        print("NO")