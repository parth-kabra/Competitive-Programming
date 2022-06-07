n=input()
s = sum((int(x) for x in n))
x = int(n)
print((x * 10 - s) // 9)