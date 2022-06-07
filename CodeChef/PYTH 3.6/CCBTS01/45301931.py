for i in range(int(input())):
    s=str(input())
    p=0
    c=0
    m=0
    for j in s:
        if j=="P":
            p+=1
        elif j=="C":
            c+=1
        elif j=="M":
            m+=1
    if p==1 and c==1 and m==1:
        print("YES")
    else:
        print("NO")