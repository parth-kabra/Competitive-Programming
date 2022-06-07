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
    def push(self, data):self.queue.append(data)
    def pop(self):
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
mod  = int(1e9+7)
imax = float("inf")
imin = float("-inf")
true = True
false= False
N   = int(1e5)
none = None
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
#----------TOTKA---------#
"""
 class Solution(object):
     def minFlips(self, s):
         n=len(s) # we save this length as it is length of window
         s+=s #we add this string because we can have any possibility like s[0]->s[n-1] or s[2]->s[n+1]meaning is that any continous variation with n length ... 
         ans=imax #assiging the answer max possible value as want our answer to be minimum so while comparing min answer will be given 
         ans1,ans2=0,0#two answer variables telling amount of changes we require to make it alternative
         s1=""#dummy string like 10010101
         s2=""#dummy string like 01010101
         for i in range(len(s)):
             if i%2==0:
                 s1+="1"
                 s2+="0"
             else :
                 s1+="0"
                 s2+="1"
         for i in range(len(s)):
             if s[i]!=s1[i]:#if they dont match we want a change so ++1
                 ans1+=1
             if s[i]!=s2[i]:
                 ans2+=1
             
             if i>=n:
                 if s[i-n]!=s1[i-n]:#now we have gone ahead so removing the intial element but wait if that element needed a change we added ++ earlier but now he is not our part so why we have his ++ so to nullify its ++ we did a -- in string
                     ans1-=1
                 if s[i-n]!=s2[i-n]:
                     ans2-=1
             if i>=n-1:#when i reaches n-1 we have n length so we check answer first time and after that we always keep seeing if we get a less answer value and after the loop we get 
                 ans=min([ans,ans1,ans2])
         return ans""" 
def kabraji_ka_totka():
 # totka hai dosto !
 n=I()
 s=inp()
 print(n//2 - max(s.count("10"),s.count("01")))
 
 
#----------TOTKA----------#
if __name__ == '__main__':
 for i in range(I()):kabraji_ka_totka()