s=str(input());
for i in range(int(input())):
    w=str(input());flag=1;
    for i in w:
        if i not in s:print("No");flag=0;break;
    if flag==1:print("Yes");# cook your dish here
