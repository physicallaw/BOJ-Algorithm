from collections import deque

n, k = map(int, input().split())
q = deque(range(n, 0, -1))
print('<', end = '')
while len(q) > 1:
   q.rotate(k - 1)
   print(q.pop(), end=', ')
print(q.pop(), '>', sep = '')