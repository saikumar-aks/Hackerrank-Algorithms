li=list(map(int, input().rstrip().split()))
sum1=0
sum2=0
li.sort()
for i in range(0, 4):
        sum1+=li[i]
        sum2+=li[4-i]
print(sum1,sum2)
