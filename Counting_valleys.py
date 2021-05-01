# https://www.hackerrank.com/challenges/counting-valleys/problem

T =input()
Steps = input()
S =0
C=0
for s in Steps:
    if s == 'U':
        S += 1
        if S == 0:
            C += 1
    else:
        S -= 1
        
print(C)
