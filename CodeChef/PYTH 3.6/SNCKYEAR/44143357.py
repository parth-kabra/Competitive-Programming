#cook your dish here
mylist=[2010, 2015, 2016, 2017, 2019]
for i in range(int(input())):
    y=int(input())
    if y in mylist:
        print("HOSTED")
    else:
        print("NOT HOSTED")