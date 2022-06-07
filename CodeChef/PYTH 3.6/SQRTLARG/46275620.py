from decimal import *
from math import *
for _ in range(int(input())):
  n=Decimal(int(input()))
  d=int(input())
  getcontext().prec = d+2
  print(str(round(n.sqrt(),d+1))[:-1])