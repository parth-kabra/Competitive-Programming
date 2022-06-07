import sys
from collections import *
from bisect import *
from string import *
from itertools import * 
from statistics import *
from math import *
from heapq import *
from re import *
from functools import cmp_to_key
from queue import *
import operator
true = True;
false= False
inp  = lambda : input()
I    = lambda : int(inp())
M    = lambda : map(int,inp().split())
MS   = lambda : map(str,inp().split())
S    = lambda : list(MS())
L    = lambda : list(M())
def exit():raise SystemExit
#-------------------------------------------------------------------------------------------------------------------------------------
 
def main():
    n,q=L()
    arr=L()
    for i in range(q):
        l,r,x=L()
        cnt = 0
        for j in range(l-1, r):
            if arr[j] < arr[x-1]:
                cnt+=1;
        print("Yes" if cnt == x - l else "No")
            
#-------------------------------------------------------------------------------------------------------------------------------------
input = lambda: sys.stdin.readline().rstrip("\r\n")
def IO():
    try:sys.stdin = open('input.txt', 'r');sys.stdout = open('output.txt', 'w')
    except:pass
if __name__ == "__main__":
    IO()
    main()