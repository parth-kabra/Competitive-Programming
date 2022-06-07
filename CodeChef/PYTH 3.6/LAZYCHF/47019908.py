for i in range(int(input())):
    res=[]
    a,b,c=list(map(int,input().split()))
    res.append(a*b)
    res.append(a+c)
    print(min(res))