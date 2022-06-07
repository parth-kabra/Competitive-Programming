for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    odd=0
    even=0
    c2=0
    l2=[]
    for i in l:
        if i%2==0:
            even+=1
        else:
            odd+=1
            l2.append(i)
        if i==2:
            c2+=1
    if odd%2==0:
        print(0)
    elif c2>0:
        print(1)
    else:
        f=False
        '''for i in l2:
            if (i**(i//2))%2==0:
                f=True
                break'''
        if f:
            print(1)
        else:
            print(-1)