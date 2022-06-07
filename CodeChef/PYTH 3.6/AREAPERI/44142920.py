def Area(l,b):
    return l*b
def Peri(l,b):
    return 2*(l+b)
l=int(input())
b=int(input())
if Area(l,b)>Peri(l,b):
    print("Area")
elif Area(l,b)==Peri(l,b):
    print("Eq")
else:
    print("Peri")
if Area(l,b)>Peri(l,b):
    print(Area(l,b))
elif Area(l,b)==Peri(l,b):
    print(Area(l,b))
else:
    print(Peri(l,b))