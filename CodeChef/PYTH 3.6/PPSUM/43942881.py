# cook your dish here
a=int(input())
for i in range(1,a+1):
    usr=list(map(int,input().split()))
    sum=(usr[-1])
    for j in range(usr[0]):
        ans1=sum*(sum+1)*0.5
        sum=ans1
    print(int(ans1))