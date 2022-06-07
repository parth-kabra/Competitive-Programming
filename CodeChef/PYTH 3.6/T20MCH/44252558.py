#cook your dish here
r, o, c=list(map(int,input().split()))
if ((20 - o) * 6 * 6 > r - c):
    print("YES")
else:
    print("NO")
