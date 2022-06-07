for i in range(int(input())):
	s=str(input())
	if(len(s)%2==0):
		h1=s[:len(s)//2]
		h2=s[(len(s)//2):]
	else:
		h1=s[:(len(s)//2)+1]
		h2=s[(len(s)//2):]
	ans=0
	for i in h1:
		if h1.count(i) == h2.count(i):
			ans+=1
	if ans == len(h1):
		print("YES\n")
	else:
		print("NO\n")# cook your dish here
