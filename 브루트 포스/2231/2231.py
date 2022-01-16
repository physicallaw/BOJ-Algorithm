import math

def decompose(n):
   d = math.floor(math.log10(n) + 1)
   for i in range(n - d * 10, n):
      temp = j = i
      while j > 0:
         temp += j % 10
         j //= 10
      if n == temp:
         return i
   return 0

n = int(input())
print(decompose(n))