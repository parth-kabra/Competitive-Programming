for i in range(int(input())):
    a,b=list(map(int,input().split()))
    num={
        "0":6,
        "1":2,
        "2":5,
        "3":5,
        "4":4,
        "5":5,
        "6":6,
        "7":3,
        "8":7,
        "9":6
    }
    ans=str(a+b)
    res=0
    for j in ans:
        res+=num[j]
    print(res)