# cook your dish here
def even(n):
    curr=0
    sum=0
    for i in range(n+1):
        sum+=curr
        curr+=2
    return sum
def odd(m):
    return (m*m)
n=int(input())
print(odd(n),even(n))