for i in range(int(input())):
    mylist=[]
    n=int(input())
    b=list(map(int,input().split()))
    g=list(map(int,input().split()))
    b.sort()
    g.sort(reverse=True)
    for j in range(n):
        mylist.append(b[j]+g[j])
    print(max(mylist))