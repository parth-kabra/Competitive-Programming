# cook your dish here
for i in range(int(input())):
    usr=list(map(int,input().split()))
    maxNum=max(usr)
    while maxNum==max(usr):
        usr.remove(maxNum)
    print(max(usr))