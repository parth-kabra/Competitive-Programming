for i in range(int(input())):
	s=str(int(input()))
	l={
		"0":0,
		"1":1,
		"2":2,
		"3":3,
		"4":4,
		"5":5,
		"6":6,
		"7":7,
		"8":8,
		"9":9
	}
	res=0
	for i in s:
		res+=l[i]
	if(res%len(s)==0):
		print("Good Work")
	else:
		print("Try again")