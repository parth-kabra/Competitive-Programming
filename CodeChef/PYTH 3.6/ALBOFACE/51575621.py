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
N 	 = int(1e6)+10
none = None
inp  = lambda : input()
I    = lambda : int(inp())
M    = lambda : map(int,inp().split())
MS   = lambda : map(str,inp().split())
S    = lambda : list(MS())
L    = lambda : list(M())
def IO():
	try:
		sys.stdin = open('input.txt', 'r');
		sys.stdout = open('uttar.txt', 'w')
	except:
		pass
IO()
class helper:
	def at(self,arr,i):return arr[i]
	def is_sorted(self,arr):return arr==sorted(arr)
	def palin(self,s):return s==reversed(s)
#----------TOTKA---------#

"""def is_u(pair1,pair2):
	pair1.sort()
	pair2.sort()
	return pair1!=pair2

def is_pre(pair1,pair2):
	if sum(pair1) == sum(pair2) and pair1[0]!=pair2[0] and is_u(pair1,pair2):
		print("YES")
		print(*pair1)
		print(*pair2)
		return
	print("NO")"""
"""a="Alice"
b="Bob"
mp={
	
	1:a,
	2:b,
	3:a,
	4:b,
	5:a,
	6:b,
	7:a,
	8:b,
	9:a,
	10:b,
	11:a,
	12:b,
	13:a,
	14:b,
	15:a,
	16:b,
	17:a,
	18:b,
	19:a,
	20:b

}"""
"""def primeFactors(n):
	res=0
	# Print the number of two's that divide n
	while n % 2 == 0:
		res+=1,
		n = n // 2
		
	# n must be odd at this point
	# so a skip of 2 ( i = i + 2) can be used
	for i in range(3,int(math.sqrt(n))+1,2):
		
		# while i divides n , print i ad divide n
		while n % i== 0:
			res+=1,
			n = n // i
			
	# Condition if n is a prime
	# number greater than 2
	if n > 2:
		res+=1
	return res;
def findPair(arr,n):

	size = len(arr)

	# Initialize positions of two elements
	i,j = 0,1

	# Search for a pair
	while i < size and j < size:

		if i != j and arr[j]-arr[i] == n:
			return (arr[i],arr[j])

		elif arr[j] - arr[i] < n:
			j+=1
		else:
			i+=1
	return (-1,-1)"""
def kabraji_ka_totka():
	# totka hai dosto !
	n=I()
	if n==1:
		print("Alice")
		return
	else:
		if n&1:
			n-=1
			cnt=0
			while n:
				cnt1=0
				while n%2==0:
					n//=2;
					cnt1+=1
				
				#mark
				n-=1
				if cnt1 >= 2:
					cnt+=1
			if cnt>=2:
				print("Bob")
				
			else:
				if cnt==0:
					print("Alice")
				else:
					print("Bob")

		else:
			cnt=0
			while n:
				cnt1=0
				while n%2==0:
					n//=2;
					cnt1+=1;
				n-=1
				if cnt1 >= 2:
					cnt+=1
			if cnt>=2:
				print("Alice")
			else:
				if cnt==0:
					print("Bob")
				else:
					print("Alice")

#----------TOTKA----------#
if __name__ == '__main__':
	case = 1
	case=I()
	for i in range(case):
		#print("Case #"+str(i)+": ")
		kabraji_ka_totka()
