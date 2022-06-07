for i in range(int(input())):
	n=int(input())
	a=list(map(int,input().split()))
	cnt=1
	b=a[0]
	for i in range(1,n):
		if(a[i]<b):
			b=a[i]
			cnt+=1
	print(cnt)