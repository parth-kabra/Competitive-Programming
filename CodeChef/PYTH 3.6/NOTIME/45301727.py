n,h,x=list(map(int,input().split()))
n=list(map(int,input().split()))
count=0
no=0
for i in range(len(n)):
    if x+n[i]==h:
        count+=1
    else:
        no+=1
if count>0:
    print("YES")
else:
    print("NO")