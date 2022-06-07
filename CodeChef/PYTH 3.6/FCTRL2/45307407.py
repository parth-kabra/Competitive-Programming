def factorial(n):
    f=1
    while n!=0:
        f*=n;
        n-=1
    return f
for i in range(int(input())):
    n=int(input())
    print(factorial(n))