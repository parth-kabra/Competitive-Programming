for i in range(int(input())):
    n,m=list(map(int,input().split()))
    x,y=list(map(int,input().split()))
    l=[]
    for j in range(n):
        s=str(input())
        f=s.count("F")
        u=s.count("U")
        p=s.count("P")
        if(f>=x):
            l.append("1")
        elif(f==x-1 and p>=y):
            l.append("1")
        else:
            l.append("0")
    for i in l:
        print(i,end="")
    print("\n",end="")