#----------FASTIOSTART-----------#

#----------FASTIOFINISH----------#

import collections,itertools,statistics,math
from collections import *
from itertools import * 
from statistics import *
from math import *
mod=int(1e9+7)

#----------UserCodeStart-----------#

def solve():
    for i in range(int(input())):
        n,k=list(map(int,input().split()))
        arr=list(map(int,input().split()))
        arr1=[0]*31
        for i in range(31):
            for j in range(n):
                if(arr[j]%2!=0):arr1[i]+=1
                arr[j]//=2;

        res=0
        for i in arr1:res+=ceil(i/k)
        print(res)

#----------UserCodeFinish----------#

if __name__=="__main__":
    solve()
