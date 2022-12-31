def main():
    n,heap_len=(int(input()),0)
    arr,new=(list(map(int,input().split())),list())
    for i in range(n):new.append([arr[i],i])
    new.sort()
    for i in range(n):
        if new[i][0] > heap_len:new[i][0] = heap_len;heap_len+=1
        elif new[i][0] == heap_len:new[i][0] = heap_len;
    new.sort(key = lambda x : x[1])
    for i in range(n):print(new[i][0],end=" ")
    print()
for i in range(int(input())):
    main()