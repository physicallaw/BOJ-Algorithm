from queue import PriorityQueue
from sys import stdin

n = int(stdin.readline())
q1, q2 = PriorityQueue(), PriorityQueue()

for i in range(n):
   q2.put(int(stdin.readline()))
   while len(q1.queue) < len(q2.queue):
      while ~q1.empty():# and -q1.queue[0] > q2.queue[0]:
         q2.put(-q1.get())
      q1.put(-q2.get())
      print(q1.queue, q2.queue)
   print(-q1.queue[0])
