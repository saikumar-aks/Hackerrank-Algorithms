s=input()
hr=int(s[0]+s[1])
if s[8]=='P' and hr==12:
        print(str(hr),end="")
elif s[8]=='P':
        print(str(hr+12),end="")
elif s[8]=='A' and hr==12:
        print("00", end="")
else:
        print(s[0]+s[1],end="")
for i in range(2,8):
        print(s[i],end="")
