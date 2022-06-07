#cook your dish here
for i in range(int(input())):
    hardness=50
    carbon=0.7
    tensile=5600
    h,c,t=list(map(float,input().split()))
    if (h>hardness) and (c<carbon) and (t>tensile):
        score=10
    elif (h>hardness) and (c<carbon):
        score=9
    elif (c<carbon) and (t>tensile):
        score=8
    elif (h>hardness) and (t>tensile):
        score=7
    elif (h>hardness) or (c<carbon) or (t>tensile):
        score=6
    else:
        score=5
    print(score)