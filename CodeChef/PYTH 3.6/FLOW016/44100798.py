#cook your dish here
def gcd(a,b):
    if a==0:
        return b
    return gcd(b%a,a)
def LCM(x,y):
    return (x*y//gcd(x,y))
for i in range(int(input())):
    a,b=list(map(int,input().split()))
    print(gcd(a,b),LCM(a,b))