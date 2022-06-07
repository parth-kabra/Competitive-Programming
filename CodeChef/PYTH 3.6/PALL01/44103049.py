#cook your dish here
for i in range(int(input())):
    a=int(input())
    a1=str(a)
    a1=int(a1[::-1])
    if a==a1:
        print("wins")
    else:
        print("loses")