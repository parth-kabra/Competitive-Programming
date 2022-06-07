# cook your dish here
for i in range(int(input())):
    usr=list(map(int,input().split()))
    a=list(map(int,input().split()))
    res=sum(a)//usr[1]
    print(min(res,usr[2]))