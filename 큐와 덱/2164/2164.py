from collections import deque

n = int(input())
q = deque(range(n, 0, -1))
while len(q) > 1:
   q.pop()
   q.rotate()
print(q.pop())