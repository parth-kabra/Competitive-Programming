for i in range(int(input())):
	d,k=list(map(int,input().split()))
	while d>=k:
		if d%k==0:
			d=0
			break
		d-=(k-1)
	if (d==0):
		print("YES")
	else:
		print("NO")