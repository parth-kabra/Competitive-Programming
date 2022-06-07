n=int(input())
even=0
odd=0
a=list(map(int,input().split()))
for i in a:
    if (i%2==0):
        even+=1
    else:
        odd+=1
if even>odd:
    print("READY FOR BATTLE")
else:
    print("NOT READY")