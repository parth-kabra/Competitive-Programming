import math
x=int(input());b=bin(x);a=0
for i in b:
    if i=="1":a+=1
print(a)