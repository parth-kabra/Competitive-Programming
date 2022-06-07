#cook your dish here
for i in range(int(input())):
    a=int(input())
    a1=str(a)
    count=0
    for j in a1:
        res=int(j)
        count+=res
    print(count)