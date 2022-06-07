#taking test case
for i in range(int(input())):
	#taking four inputs in one line
	xa,xb,Xa,Xb=list(map(int,input().split()))

	#final sum
	res=0

	#division of Xa,xa and adding it to result
	res+=Xa//xa;

	#division of Xb,xb and adding it to result
	res+=Xb//xb

	#printing the final result
	print(res)