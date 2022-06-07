for i in range(int(input())):
    s=list(map(str,input().split()))
    count=0
    for j in s:
        if j=="not":
            count+=1
    if count>0:
        print("Real Fancy")
    else:
        print("regularly fancy")