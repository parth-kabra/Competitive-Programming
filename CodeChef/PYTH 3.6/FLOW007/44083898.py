# cook your dish here
for i in range(int(input())):
    n=int(input())
    rev = 0
    while(n > 0):
        a = n % 10
        rev = rev * 10 + a
        n = n // 10
    print(rev)