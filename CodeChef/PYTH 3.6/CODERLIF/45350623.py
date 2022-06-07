for i in range(int(input())):
    n=list(map(int,input().split()))
    l=[]
    for j in n:
        l.append(str(j))
    l="".join(l)
    if "1"*6 in l:
        print("#coderlifematters")
    else:
        print("#allcodersarefun")