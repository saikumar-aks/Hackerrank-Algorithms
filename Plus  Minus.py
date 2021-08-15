n=int(input().rstrip())
array=list(map(int, input().rstrip().split()))
pos=0
neg=0
zero=0
for i in array:
    if i>0:
        pos+=1
    elif i<0:
        neg+=1
    else:
        zero+=1
print('%.6f'%(pos/n),"\n"'%.6f'%(neg/n),"\n" '%.6f'%(zero/n))
    

