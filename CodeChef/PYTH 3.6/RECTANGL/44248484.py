#cook your dish here
for i in range(int(input())):
    a,b,c,d=list(map(int,input().split()))
    if a==c and b==d:
        print('YES')
    elif a==b and d==c:
        print('YES')
    elif b==c and a==d:
        print('YES')
    else:
        print('NO')