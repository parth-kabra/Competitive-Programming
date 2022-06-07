
l=[]
n=int(input())
for i in range(n):
	l.append(int(input()))
l.sort()
L=[]
for i in range(n):
	L.append(l[i]* (n-i))
print(max(L))# cook your dish here
