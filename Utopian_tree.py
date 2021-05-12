t=int(input())
while (t != 0):
    t-=1
    H=1
    n=int(input())
    for i in range(1,n+1):
        if i%2==0:
            H+=1
        else:
            H+=H
    print(H)

