from queue import PriorityQueue
import sys

n = int(input())
arr = list(map(int, sys.stdin.readline().split()))
q = PriorityQueue()
l, temp = 0, -2000000000
m = dict()

for i in arr:
   q.put(i)
while not q.empty():
   top = q.get()
   if temp != top:
      m[top] = l
      l += 1
      temp = top

for i in arr:
   sys.stdout.write(str(m[i]) + ' ')