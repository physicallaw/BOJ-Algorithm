def fly(a, b):
   n = b - a
   check = 0
   i = 0

   while check < n:
      i += 1
      check += (i + 1) // 2

   return i

n = int(input())

for i in range(n):
   a, b = map(int, input().split())
   print(fly(a, b))