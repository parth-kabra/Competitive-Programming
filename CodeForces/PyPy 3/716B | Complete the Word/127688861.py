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
N=int(1e5+9)
none=None
inp = lambda : input()
I   = lambda : int(inp())
M   = lambda : map(int,inp().split())
MS  = lambda : map(str,inp().split())
S   = lambda : list(MS())
L   = lambda : list(M())
Yes = lambda : print("Yes")
No  = lambda : print("No")
YES = lambda : print("YES")
NO  = lambda : print("NO")
yes = lambda : print("yes")
no  = lambda : print("no")
chartonum={"1":1,"2":2,"3":3,"4":4,"5":5,"6":6,"7":7,"8":8,"9":9,"0":0}
def IO():
 try:
  sys.stdin = open('input.txt', 'r')
  sys.stdout = open('uttar.txt', 'w')
 except:
  pass
def true_yes(statement):
 return YES() if statement else NO()
def binary(x):
 return bin(x).replace("0b","")
def state(statement,one,two):
 print(one if statement else two)
def swap(a,b):
 a,b=b,a
def bintodec(n):
 return int(n,2)
def prec(a):
 return ("{0:.9f}".format(a))
def case(t):
 print("Case #"+str(i)+": ",end="")
def palin(s):
 return s==s[::-1]
def second(arr):
 return arr[1]
def first(arr):
 return arr[0]
def is_sorted(arr):
 return arr==sorted(arr)
 
#----------TOTKA-----------#
"""
char_set={
 "A":0,
 "B":1,
 "C":2,
 "D":3,
 "E":4,
 "F":5,
 "G":6,
 "H":7,
 "I":8,
 "J":9,
 "K":10,
 "L":11,
 "M":12,
 "N":13,
 "O":14,
 "P":15,
 "Q":16,
 "R":17,
 "S":18,
 "T":19,
 "U":20,
 "V":21,
 "W":22,
 "X":23,
 "Y":24,
 "Z":25
}
"""
def kabraji_ka_totka():
 # totka hai dosto !
 IO()
 s=inp()
 """dp=Counter(s)
 values=(list(dp.values()))
 if 2 in values or "?" not in s or len(s) < 26:
  print("-1")
  return"""
 for i in range(len(s)):
  curr=list(s[i:i+26])
  if len(curr )<26:
   continue;
  contains_no = [x for x in ascii_uppercase if x not in curr]
  visited = [i for i,j in enumerate(curr) if j == "?"]
  if len(contains_no)== len(visited):
   for x,y in zip(contains_no,visited):
    curr[y] = x;
   s=s[:i]+"".join(curr)+s[i+26:]
   s=s.replace("?","A")
   print(s)
   return
 print(-1)
 
#----------TOTKA----------#
 
if __name__=="__main__":
 kabraji_ka_totka()