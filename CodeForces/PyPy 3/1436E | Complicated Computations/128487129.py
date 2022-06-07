#----------FASTIOSTART-----------#
from __future__ import division, print_function
import os
import sys
from io import BytesIO, IOBase
if sys.version_info[0] < 3:
 from __builtin__ import xrange as range
 from future_builtins import ascii, filter, hex, map, oct, zip
BUFSIZE = 8192
class FastIO(IOBase):
 newlines = 0
 def __init__(self, file):
  self._fd = file.fileno()
  self.buffer = BytesIO()
  self.writable = "x" in file.mode or "r" not in file.mode
  self.write = self.buffer.write if self.writable else None
 def read(self):
  while True:
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
 sep, file = kwargs.pop("sep", " "), kwargs.pop("file", sys.stdout)
 at_start = True
 for x in args:
  if not at_start:
   file.write(sep)
  file.write(str(x))
  at_start = False
 file.write(kwargs.pop("end", "\n"))
 if kwargs.pop("flush", False):
  file.flush()
if sys.version_info[0] < 3:
 sys.stdin, sys.stdout = FastIO(sys.stdin), FastIO(sys.stdout)
else:
 sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)
input = lambda: sys.stdin.readline().rstrip("\r\n")
#----------FASTIOFINISH----------#
import collections,string,bisect,re,random,queue,itertools,statistics,math
from collections import *
from bisect import *
from string import *
from itertools import * 
from statistics import *
from math import *
from re import *
from queue import *
#----------SASTA_STL-------------#
# stack
class Stack:
    def __init__(self):self.items = []
    def push(self, item):self.items.append(item)
    def pop(self):return self.items.pop()
    def empty(self):return self.items == []
    def size(self):return len(self.items)
    def at(self,idx):
     try:return self.items[idx]
     except:return -1
#priority_queue
class priority_queue(object):
    def __init__(self):self.queue = []
    def __str__(self):return ' '.join([str(i) for i in self.queue])
    def empty(self):return len(self.queue) == 0
    def insert(self, data):self.queue.append(data)
    def delete(self):
        try:
            max = 0
            for i in range(len(self.queue)):
                if self.queue[i] > self.queue[max]:
                    max = i
            item = self.queue[max]
            del self.queue[max]
            return item
        except IndexError:
            print()
            exit()
#----------SASTA_STL-------------#
mod=int(1e9+7)
imin=-2147483648;
imax=2147483647;
true=True
false=False
N=int(1e5+10)
none=None
inp = lambda : input()
I   = lambda : int(inp())
M   = lambda : map(int,inp().split())
MS  = lambda : map(str,inp().split())
S   = lambda : list(MS())
L   = lambda : list(M())
def IO():
 try:sys.stdin = open('input.txt', 'r');sys.stdout = open('uttar.txt', 'w')
 except:pass
IO()
#----------TOTKA-----------#
"""def firstMissingPositive(arr, n):
 ptr = 0
 for i in range(n):
  if arr[i] == 1:
   ptr = 1
   break
 if ptr == 0:
  return(1)
 for i in range(n):
  if arr[i] <= 0 or arr[i] > n:
   arr[i] = 1
 for i in range(n):
  arr[(arr[i] - 1) % n] += n
 for i in range(n):
  if arr[i] <= n:
   return(i + 1)
 return(n + 1)
 
def sub_lists (l,n):
 lists = set()
 for i in range(n + 1):
  for j in range(i):
   #lists.append(l[j: i])
   lists.add(firstMissingPositive(l[j:i],len(l[j:i])))
 return list(lists)
"""
 
#from segment_tree import SegmentTree
n=I()
arr=L()
"""N = 100000;
tree = [0] * (2 * N);
def build(arr) :
 for i in range(n) :
  tree[n + i] = arr[i];
 for i in range(n - 1, 0, -1) :
  tree[i] = tree[i << 1] + tree[i << 1 | 1];
def updateTreeNode(p, value) :
 tree[p + n] = value;
 p = p + n;
 i = p;
 while i > 1 :
  tree[i >> 1] = tree[i] + tree[i ^ 1];
  i >>= 1;
def query(l, r) :
 res = 0;
 l += n;
 r += n;
 while l < r :
  if (l & 1) :
   res += tree[l];
   l += 1
  if (r & 1) :
   r -= 1;
   res += tree[r];
  l >>= 1;
  r >>= 1
 
 return res;"""
class SegmentTree:
    def __init__(self, data, default=0, func=min):
        self._default = default
        self._func = func
        self._len = len(data)
        self._size = _size = 1 << (self._len - 1).bit_length()
 
        self.data = [default] * (2 * _size)
        self.data[_size:_size + self._len] = data
        for i in reversed(range(_size)):
            self.data[i] = func(self.data[i + i], self.data[i + i + 1])
 
    def __delitem__(self, idx):
        self[idx] = self._default
 
    def __getitem__(self, idx):
        return self.data[idx + self._size]
 
    def __setitem__(self, idx, value):
        idx += self._size
        self.data[idx] = value
        while idx:
            idx >>= 1
            self.data[idx] = self._func(self.data[2 * idx], self.data[2 * idx + 1])
 
    def __len__(self):
        return self._len
 
    def query(self, start, stop):
        """func of data[start, stop)"""
        start += self._size
        stop += self._size
 
        res_left = res_right = self._default
        while start < stop:
            if start & 1:
                res_left = self._func(res_left, self.data[start])
                start += 1
            if stop & 1:
                stop -= 1
                res_right = self._func(self.data[stop], res_right)
            start >>= 1
            stop >>= 1
 
        return self._func(res_left, res_right)
 
    def __repr__(self):
        return "SegmentTree({0})".format(self.data)
tree=[0]*(n+1)
def kabraji_ka_totka():
 # totka hai dosto !
 
 #res=sub_lists(arr,n)
 #print(firstMissingPositive(res,len(res)))
 """s=SegmentTree(arr)
 print(s)"""
 
 #build(arr)
 if len(set(arr))==1 and 1 in arr:
  print("1")
  return
 s=SegmentTree(list(range(-n-1,0)),float("inf"))
 for i in range(n):
  x=arr[i]
  ind=s.query(0,x)
  if ind < 0:
   tree[ind]=1;
  else:
   tree[arr[ind]-1]=1
 
  s.__setitem__(x-1,i)
 
 for i in range(n+1):
  ind=s.query(0,i+1)
  if ind < 0:
   tree[ind]=1
  else:
   tree[arr[ind]-1]=1
 for i in range(n+1):
  if tree[i] == 0:
   print(i+1)
   return
 
 print(n+2)
 
#----------TOTKA----------#
if __name__ == '__main__':
 kabraji_ka_totka()