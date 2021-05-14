t=int(input())
for _ in range(t):
  n , k = map(int, input().split())
  count=0
  val=list(map(int , input().strip().split()))
  val.sort()
  for i in val:
      if i <=0:
          count+=1
      elif i > 0:
          break
  if count >= k:
      print("NO")
  else:
      print("YES")
