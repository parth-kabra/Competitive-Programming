for i in range(int(input())):
    l=[]
    odd=0
    n=int(input())
    for j in range(n):
        l.append(int(input()))
    for k in l:
        if l.count(k)%2!=0:
            print(k)
            break
        