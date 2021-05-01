#Problem :- https://www.hackerrank.com/challenges/the-hurdle-race/problem

t , k=map(int ,  input().strip().split())
li=list(map(int , input().strip().split()))
li.sort()
if k > li[t-1]:
    print('0')
else:
    val=abs(li[t-1] - k)
    print(str(val))
