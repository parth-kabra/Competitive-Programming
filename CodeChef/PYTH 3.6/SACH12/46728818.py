# cook your dish here
def dectobin(n):
	return bin(n).replace("0b","")
def solve():
	#print(dectobin(7))
	for i in range(int(input())):
		n=(int(input()))
		n=str(dectobin(n))
		print(n.count("1"))
if __name__=="__main__":
	solve()