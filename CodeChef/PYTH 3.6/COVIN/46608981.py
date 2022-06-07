for i in range(int(input())):
	n=int(input())
	a=1
	b=1
	if(n==1 or n==2):
		print(a)
	else:
		for j in range(1,n):
			c=a+b
			a=b
			b=c
		print(c)