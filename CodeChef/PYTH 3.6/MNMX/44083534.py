for i in range(int(input())):
    usr=int(input())
    usr1=list(map(int,input().split()))
    res=(min(usr1)*(usr-1))
    print(res)