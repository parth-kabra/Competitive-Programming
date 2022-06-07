#cook your dish here
for i in range(int(input())):
    a=int(input())
    if (a<1500):
        hra=(a*0.1)
        da=(a*0.90)
        print(str(a+hra+da))
    else:
        print(a+500+(a*.98))