mod=int(1e9+7)
for i in range(int(input())):
	n,m=list(map(int,input().split()))
	a=pow(2,n,mod)-1
	print(pow(a,m,mod))
	