from collections import *
from bisect import *
from string import *
from itertools import * 
from statistics import *
from math import *
from heapq import *
from re import *
import sys
from functools import cmp_to_key
from queue import *
import operator
false = False
true = True
inp  = lambda : input()
I    = lambda : int(inp())
M    = lambda : map(int,inp().split())
MS   = lambda : map(str,inp().split())
S    = lambda : list(MS())
L    = lambda : list(M())
 
def main():
    n=I()
    arr=L()
    if len(set(arr)) == 1:
        print("YES")
        return
    blocks = sum(list([ele & 1 for ele in arr]))
    if not blocks:
        print("YES")
    else:
        if blocks < n or blocks > n:
            print("NO")
        else:
            print("YES")
            
def IO():
    try:sys.stdin = open('input.txt', 'r');sys.stdout = open('output.txt', 'w')
    except:pass
 
if __name__ == "__main__":
    IO()
    for i in range(I()):
        main()