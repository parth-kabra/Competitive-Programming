l=["a","e","i","o","u"]
for i in range(int(input())):
	s=input()
	for j in s:
		if(j not in l):
			s=s.replace(j,j.upper())
	print(s)