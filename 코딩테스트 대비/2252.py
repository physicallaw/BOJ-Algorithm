from sys import stdin
from collections import deque

n, m = map(int, stdin.readline().split())
arr1 = [0] * n
arr2 = []
for _ in range(n):
    arr2.append([])
for _ in range(m):
    a, b = map(int, stdin.readline().split())
    arr1[b - 1] += 1
    arr2[a - 1].append(b - 1)
q = deque()
for i in range(n):
    if arr1[i] == 0:
        q.append(i)
while len(q):
    t = q.popleft()
    print(t + 1, end=' ')
    for i in arr2[t]:
        arr1[i] -= 1
        if arr1[i] == 0:
            q.append(i)