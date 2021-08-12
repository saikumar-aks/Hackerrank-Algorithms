Alice=list(map(int, input().split()))
Bob=list(map(int, input().split()))
alice=0
bob=0
for i in range(3):
    if Alice[i]>Bob[i]:
        alice+=1
    elif Alice[i]<Bob[i]:
        bob+=1
print(alice,bob)
