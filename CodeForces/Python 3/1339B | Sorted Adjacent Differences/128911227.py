for i in range(int(input())):
 n=int(input())
 arr=list(map(int,input().split()))
 arr.sort()
 while arr:
  print(arr.pop(len(arr)//2),end=" ")