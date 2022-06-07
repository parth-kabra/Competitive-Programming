mylist=[]
x=int(input())
for i in range(1, x + 1):
    if x % i == 0:
        mylist.append(i)
print(len(mylist))
for j in mylist:
    print(j,end=" ")
