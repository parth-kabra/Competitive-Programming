for i in range(int(input())):
    n,k=list(map(int,input().split()))
    s=input()
    count=0
    maxcount=0
    for j in s:
        if j=="*":
            count+=1
            if maxcount<count:
                maxcount=count
        else:
            count=0
    if maxcount>=k:
        print("YES")
    else:
        print("NO")