n=int(input())
sum1=0
sum2=0

matrix=[]
for _ in range(n):
    matrix.append(list(map(int, input().rstrip().split())))

for i in range(n):
    sum1+=matrix[i][i]

for j in range(n):
    sum2+=matrix[j][n-1-j]

print(abs(sum1-sum2))
