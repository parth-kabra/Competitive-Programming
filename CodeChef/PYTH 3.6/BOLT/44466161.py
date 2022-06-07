#cook your dish here
for i in range(int(input())):
    k1,k2,k3,v=list(map(float,input().split()))
    rec=958
    ans=100.00/(k1*k2*k3*v)*100.00
    res=(float(round(ans)))
    if res<rec:
        print("YES")
    else:
        print("NO")