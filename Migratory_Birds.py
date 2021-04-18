# < problem link :- https://www.hackerrank.com/challenges/migratory-birds/problem >

t = int(input())
li=list(map(int , input().strip().split(' ')))
li.sort()
li2=[1 , 2 , 3 , 4 , 5]
count1=0
for i in range(len(li2)):
      count2 = li.count(li2[i])
      if  count2 > count1 :
          count1=count2
          val=li2[i]
print(val)
