try:
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    ans=0
    for i in range(len(a)):
        ans+=abs(a[i]-b[i])
    print(ans)
except:
    pass# cook your dish here
