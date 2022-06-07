#worst solution!
n,mylist=int(input()),[]
n1=str(n)
for i in n1:
    mylist.append(i)
if len(mylist)==1:
    print(1)
elif len(mylist)==2:
    print(2)
elif len(mylist)==3:
    print(3)
else:
    print("More than 3 digits")