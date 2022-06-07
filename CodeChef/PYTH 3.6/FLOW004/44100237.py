#cook your dish here
for i in range(int(input())):
    a=int(input())
    a1=str(a)
    first,last=int(a1[0]),int(a1[-1])
    print(first+last)