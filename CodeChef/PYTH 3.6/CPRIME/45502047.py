# cook your dish here
def palin(s):
    return s == s[::-1]
def prime(n):
    if (n <= 1):
        return False
    for i in range(2, n):
        if (n % i == 0):
            return False
    return True
for i in range(int(input())):
    n=(int(input()))
    n1=str(n)
    if (prime(n) and palin(n1)):
        print("Yes")
    else:
        print("No")