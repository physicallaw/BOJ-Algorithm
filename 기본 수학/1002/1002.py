def dist(x1, y1, x2, y2):
   return math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)

n = int(input())

for i in range(n):
   x1, y1, r1, x2, y2, r2= map(int, input().split())
   d = dist(x1, y1, x2, y2)
   if (x1 == x2 and y1 == y2 and r1 == r2):
      answer = -1
   elif (d == r1 + r2 or d == abs(r1 - r2)):
      answer = 1
   elif (abs(r1 - r2) < d < r1 + r2):
      answer = 2
   else:
      answer = 0
   print(answer)