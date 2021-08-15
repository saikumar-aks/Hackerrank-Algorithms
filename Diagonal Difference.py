n=int(input())
sum1=0
sum2=0

matrix=[]
for _ in range(n):
    matrix.append(list(map(int, input().rstrip().split())))

for i in range(n):
    sum1+=matrix[i][i]
    sum2+=matrix[i][n-1-i]

print(abs(sum1-sum2))

