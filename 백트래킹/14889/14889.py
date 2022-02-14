from itertools import combinations;

n = int(input())
arr = [None] * n
answer = 999999999
for i in range(n):
   arr[i] = list(map(int, input().split()))

for i in combinations(range(n), n // 2):
   a, b = 0, 0
   j = set(range(n)) - set(i)
   for x in i:
      for y in i:
         a += arr[x][y]
   for x in j:
      for y in j:
         b += arr[x][y]
   answer = min(answer, abs(a - b))
print(answer)