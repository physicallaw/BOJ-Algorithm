from sys import stdin
from queue import PriorityQueue

n, m = map(int, stdin.readline().split())
q = PriorityQueue()
for _ in range(m):
    a, b, c = map(int, stdin.readline().split())
    q.put([c, a, b])

v = list(range(n + 1))
def getParent(n):
    if v[n] == n:
        return n
    v[n] = getParent(v[n])
    return v[n]

answer = 0
while q.empty() == False:
    t = q.get()
    if getParent(t[1]) != getParent(t[2]):
        answer += t[0]
        v[getParent(t[2])] = getParent(t[1])
print(answer)