from collections import deque

n, m = map(int, input().split())
q = deque(range(1, n + 1))
arr = list(map(int, input().split()))
answer = 0

for i in range(m):
   j = 0
   while q[j] != arr[i] and q[-j] != arr[i]:
      j += 1
   if q[j] == arr[i]:
      q.rotate(-j)
   else:
      q.rotate(j)
   q.popleft()
   answer += j
print(answer)