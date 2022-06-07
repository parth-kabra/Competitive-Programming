for i in range(int(input())):
	n=list(map(int,input().split()))
	ans=["Beginner",
	"Junior Developer",
	"Middle Developer",
	"Senior Developer",
	"Hacker",
	"Jeff Dean"]
	print(ans[sum(n)])