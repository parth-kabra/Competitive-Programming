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
N=int(3e5+5)
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
 try:sys.stdin = open('input.txt', 'r');sys.stdout = open('uttar.txt', 'w')
 except:pass
IO()
def true_yes(statement):return YES() if statement else NO()
def binary(x):return bin(x).replace("0b","")
def state(statement,one,two):print(one if statement else two)
def swap(a,b):a,b=b,a
def bintodec(n):return int(n,2)
def prec(a):return ("{0:.9f}".format(a))
def case(t):print("Case #"+str(t)+": ",end="")
def palin(s):return s==s[::-1]
def second(arr):return arr[1]
def first(arr):return arr[0]
def is_sorted(arr):return arr==sorted(arr)
#----------TOTKA-----------#
 
def kabraji_ka_totka():
 # totka hai dosto !
 h,m=(int(x) for x in inp().split(":")) 
 while true:
  m+=1
  if m==60:
   m=0
   h+=1
  if h==24:
   h=0;
  s="{:02d}:{:02d}".format(h,m)
  if palin(s):
   print(s)
   return
 
#----------TOTKA----------#
 
if __name__=="__main__":
 kabraji_ka_totka()