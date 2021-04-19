# < problem link :- https://www.hackerrank.com/challenges/sock-merchant/problem >

#!/bin/python3
from collections import Counter
import os
import sys

def sockMerchant(n, ar):
  c = Counter(ar)
  s = 0
  for i in c:
     s += c[i]//2
  return s
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
