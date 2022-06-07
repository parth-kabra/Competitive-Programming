import random
def main():
    n=int(input())
    arr=list(map(int,input().split()))
    if 0 not in arr:
        print(*arr)
        return
        
    s = set(arr)
        
    miss = [i for i in range(1, n + 1) if i not in s]
    while True:
        # shuffle missed one and check if possible
        random.shuffle(miss)
        temp = arr.copy()
        ind = 0;
        for i in range(n):
            if temp[i] == 0:
                temp[i] = miss[ind]
                ind+=1
        if not any(i + 1 == x for i, x in enumerate(temp)):
            print(*temp)
            return
main()