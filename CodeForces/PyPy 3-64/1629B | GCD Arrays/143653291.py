#!/usr/bin/env python
from __future__ import division, print_function
import os
import sys
from io import BytesIO, IOBase
from collections import *
from bisect import *
from string import *
from itertools import * 
from statistics import *
from math import *
from heapq import heappush as push, heappop as pop
from re import *
from functools import cmp_to_key
from queue import *
import operator
mod  = int(1e9+7)
mod1 = 998244353
imax = float("inf")
imin = float("-inf")
true = True
N    = int(1e5)+1;
false= False
vowels = "aeiou"
none = None
t3bit = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
inp  = lambda : input()
I    = lambda : int(inp())
M    = lambda : map(int,inp().split())
MS   = lambda : map(str,inp().split())
S    = lambda : list(MS())
L    = lambda : list(M())
test_case_run__ = false;
def case():global test_case_run__;test_case_run__ = true;
def exit():raise SystemExit
if sys.version_info[0] < 3:
    from __builtin__ import xrange as range
    from future_builtins import ascii, filter, hex, map, oct, zip
#-------------------------------------------------------------------------------------------------------------------------------------
 
case()
from bisect import bisect_left, insort_right
class Solution:
    def countPalindromicSubsequences(self, s: str) -> int:
        stacks = {}
        for index, element in enumerate(s):
            if element in stacks:
                stacks[element].append(index)
            else:
                stacks[element] = [index]
        
        def find_first(char, left):
            if char not in stacks:
                return -1
            array = stacks[char]
            candidate = bisect.bisect_left(array,left)
            if candidate == len(array):
                return -1
            return array[candidate]
        def find_last(char, right):
            if char not in stacks:
                return  -1
            array = stacks[char]
            candidate = bisect.bisect_left(array,right)
            if candidate == len(array):
                return array[candidate-1]
            if right == array[candidate]:
                return right
            return array[candidate-1]
        
        def _count_all_palindroms(left,right):
            if left > right:
                return 0
            pos = (left,right)
            if pos in cache:
                return cache[pos]
            
            unique_characters = 'abcd'
            all_palindroms = 0 # getting all unique elements within this interval
            for char in unique_characters:
                first = find_first(char, left)
                if first == -1 : # doesnt exist
                    continue
                last = find_last(char, right)
 
                if first > last or not (left<=first<=last<=right):
                    continue
                if last == first: # exists just once
                    all_palindroms += 1 
                    continue
                
                all_palindroms =  (all_palindroms + 2 + _count_all_palindroms(first+1,last-1)) % (10 ** 9 + 7)
            cache[pos] = all_palindroms
            
            return all_palindroms
                
        if len(s) == 1:
            return 1
        cache = {}
        results =  _count_all_palindroms(0,len(s)-1)
 
        return results
def main():
    l,r,k=L()
    if k == 0:
        print("NO" if r - l > 0 else "NO" if l == 1 else "YES")
        return
    odd, even = (0,0);
    if(l&1):
        odd = (r-l+2) // 2 if (r & 1) else (r - l + 1) // 2;
    else:
        odd = (r - l + 1) // 2 if (r&1) else (r - l) // 2
    print("YES" if odd <= k else "NO")
 
#-------------------------------------------------------------------------------------------------------------------------------------
BUFSIZE = 8192
class FastIO(IOBase):
    newlines = 0
    def __init__(self, file):
        self._fd = file.fileno()
        self.buffer = BytesIO()
        self.writable = "x" in file.mode or "r" not in file.mode
        self.write = self.buffer.write if self.writable else None
    def read(self):
        while true:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            if not b:
                break
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines = 0
        return self.buffer.read()
    def readline(self):
        while self.newlines == 0:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            self.newlines = b.count(b"\n") + (not b)
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines -= 1
        return self.buffer.readline()
    def flush(self):
        if self.writable:
            os.write(self._fd, self.buffer.getvalue())
            self.buffer.truncate(0), self.buffer.seek(0)
class IOWrapper(IOBase):
    def __init__(self, file):
        self.buffer = FastIO(file)
        self.flush = self.buffer.flush
        self.writable = self.buffer.writable
        self.write = lambda s: self.buffer.write(s.encode("ascii"))
        self.read = lambda: self.buffer.read().decode("ascii")
        self.readline = lambda: self.buffer.readline().decode("ascii")
def print(*args, **kwargs):
    """Prints the values to a stream, or to sys.stdout by default."""
    sep, file = kwargs.pop("sep", " "), kwargs.pop("file", sys.stdout)
    at_start = true
    for x in args:        
        if not at_start:
            file.write(sep)
        file.write(str(x))
        at_start = false
    file.write(kwargs.pop("end", "\n"))
    if kwargs.pop("flush", false):
        file.flush()
if sys.version_info[0] < 3:
    sys.stdin, sys.stdout = FastIO(sys.stdin), FastIO(sys.stdout)
else:
    sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)
input = lambda: sys.stdin.readline().rstrip("\r\n")
class maths:
    def power(self,a,b,m):
        a%=m;
        res = 1;
        while b > 0:
            if(b&1):
                res = res * a % m;
            a = a * a % m;
            b >>= 1;
        return res;
    def prec(self, a):
        return ("{0:.2f}".format(a))
def IO():
    try:sys.stdin = open('input.txt', 'r');sys.stdout = open('output.txt', 'w')
    except:pass
if __name__ == "__main__":
    maths = maths()
    IO()
    if test_case_run__:
        for i in range(I()):
            #print("Case #",i+1,": ",sep="",end="")
            main()
 
    else:
        main()