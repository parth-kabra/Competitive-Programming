try:
    def ans(n):
        if n==1:
            return False
        for i in range(2,n):
            if n%i==0:
                return False
        return True
    for i in range(int(input())):
        n=int(input())
        if ans(n):
            print("yes")
        else:
            print("no")
except:
    pass