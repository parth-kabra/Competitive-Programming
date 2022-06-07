for i in range(int(input())):
	n=int(input())
	res=[]
	s=0
	for j in range(1,n+1):
		for i in range(s):
			res.append("*")
		res.append(s+1)
		s+=1
		print(*res,sep="")