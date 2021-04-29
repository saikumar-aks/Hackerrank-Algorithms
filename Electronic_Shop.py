b , n , m = map(int , input().strip().split())
key=list(map(int , input().strip().split()))
usb=list(map(int , input().strip().split()))
count=0
for i in range(len(key)):
    for j in range(len(usb)):
        if (key[i]+usb[j] <= b) and (key[i]+usb[j] > count):
            count=key[i]+usb[j]
if count > 0:
    print(count)
else:
    print("-1")
