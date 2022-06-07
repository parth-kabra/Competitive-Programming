for i in range(int(input())):
    n=int(input())
    if n==1:
        print(20)
    elif n==2:
        print(36)
    elif n==3:
        print(51)
    elif n==4:
        print(60)
    else:
        rem=n%4
        ans=((n-rem)//4)*44
        if rem==0:
            ans+=16
        elif rem==1:
            ans+=32
        elif rem==2:
            ans+=44
        elif rem==3:
            ans+=55
        print(ans)
        
        