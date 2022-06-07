mylist=[]
a=int(input())
b=int(input())
c=int(input())
mylist.append(a)
mylist.append(b)
mylist.append(c)
maxNum=max(mylist)
while maxNum==max(mylist):
    mylist.remove(maxNum)
print(max(mylist))