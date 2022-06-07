def check(a, b, c):
    if (a + b <= c) or (a + c <= b) or (b + c <= a) :
        return False
    else:
        return True
        
def area(a,b,c):
    s = (a + b + c) / 2
    area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
    return (area)
    
a,b,c=list(map(int,input().split()))
if(check(a,b,c)):
    ans=area(a,b,c)
    if (ans>0):
        print("YES")
else:
    print("NO")