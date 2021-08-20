n=int(input())
li=list(map(int, input().rstrip().split()))
x=li.count(max(li))
print(x)

#------------------------OR------------------------------------

n=int(input())
li=list(map(int, input().rstrip().split()))
li.sort()
count=0
for e in li:
        if e==li[-1]:
                count+=1
print(count)
