x=int(input())
for i in range(x):
    x,y,z=map(int, input().strip().split())
    if (abs(x - z) < abs(y - z)):
        print("Cat A")
    elif (abs(x - z) > abs(y - z)):
        print("Cat B")
    else:
        print("Mouse C")
