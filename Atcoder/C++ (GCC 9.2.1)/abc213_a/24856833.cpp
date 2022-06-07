"""
..::::::::::::..:::::..:::::..:::::..::::::::..::::::::..:::::..::
'########::::::::'###:::::::'########:::::'########::::'##::::'##:
 ##.... ##::::::'## ##:::::: ##.... ##::::... ##..::::: ##:::: ##:
 ##:::: ##:::::'##:. ##::::: ##:::: ##::::::: ##::::::: ##:::: ##:
 ########:::::'##:::. ##:::: ########:::::::: ##::::::: #########:
 ##.....:::::: #########:::: ##.. ##::::::::: ##::::::: ##.... ##:
 ##::::::::::: ##.... ##:::: ##::. ##:::::::: ##::::::: ##:::: ##:
 ##::::::::::: ##:::: ##:::: ##:::. ##::::::: ##::::::: ##:::: ##:
..::::::::::::..:::::..:::::..:::::..::::::::..::::::::..:::::..:: 

8___8______________________8___8____
___*8___8*____________________*8___8*___
__*88___88*__________________*88___88*__
_*888___888*________________*888___888*_
_*8888_8888*________________*8888_8888*_
__*8888888*__________________*8888888*__
___*88888*____________________*88888*___
____*888*_________7**7_________*888*____
____*88*_________*8888*_________*88*____
_____*88*_______88888888_______*88*_____
_8_____*8*_____8888888888_____*8*_____8_
__8*_____*8*__8_88888888_8__*8*_____*8__
____88*________8888888888________*88____
_8_____*8888*_8_88888888_8_*8888*_____8_
___88__________8888888888__________88___
_8_____*8888*_8_88888888_8_*8888*_____8_
___*8*_________8888888888_________*8*___
__8____*888*__8_88888888_8__*888*____8__
____88_________8888888888_________88____
_______*888*__8_88888888_8__*888*_______
_______________8888888888_______________
_______________*88888888*_______________
________________*888888*________________
_________________*8888*_________________
___________________*888_________________
_____________________*88________________
_____________6_________*88______________
___________*8____________*88____________
__________*88______________*8*__________
_________*8888*______________*8*________
_________*888*________________*8*_______
__________*88*________________*8*_______
___________*8*_______________*8*________
____________*8*_____________*8*_________
______________*8*_________*8*___________
_________________*<88888>*_____________
"""
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

import collections,re,itertools,statistics,math
from collections import *
from itertools import * 
from statistics import *
from math import *
from re import *
mod=int(1e9+7)
imin=-2147483648;
imax=2147483647;
true=True
false=False
none=None
inp = lambda : input()
I   = lambda : int(inp())
M   = lambda : map(int,inp().split())
L   = lambda : list(M())
Yes = lambda : print("Yes")
No  = lambda : print("No")
YES = lambda : print("YES")
NO  = lambda : print("NO")
def IO(controll):
	if controll==false:
		sys.stdin = open('input.txt', 'r')
		sys.stdout = open('output.txt', 'w')
	else:
		pass
def true_yes(statement):
	return YES() if statement else NO()
def state(statement,one,two):
	print(one if statement else two)
def swap(a,b):
	a,b=b,a
def prec(a):
	return ("{0:.7f}".format(a))
def binary_search(arr,low,high,x):
	while (low <= high):
		mid=low+(high-low)//2;
		if(arr[mid]==x):
			return [mid,true]
		elif(arr[mid] > x):
			high=mid-1;
		else:
			low=mid-1;
	return [-1,false]
import sys
#----------TOTKA-----------#
def large2(arr, arr_size):
    if (arr_size < 2):
        return -1
        return;
 
    largest = second = -2454635434;
    for i in range(0, arr_size):
        largest = max(largest, arr[i]);
    for i in range(0, arr_size):
        if (arr[i] != largest):
            second = max(second, arr[i]);
 
    if (second == -2454635434):
    	return -1;
    else:
        return second
def kabraji_ka_totka():
	# totka hai dosto !
	IO(1)
	n=I()
	arr=L()
	if(large2 != -1):
		print(arr.index(large2(arr,n))+1)
	else:
		print(-1)

#----------TOTKA----------#

if __name__=="__main__":
	kabraji_ka_totka()
