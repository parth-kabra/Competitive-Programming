for i in range(int(input())):
	n=int(input())
	b=bin(n).replace("0b","")
	print(str(b).count("1"))