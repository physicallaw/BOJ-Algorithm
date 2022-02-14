from queue import Queue
from queue import PriorityQueue

q = Queue()
pq = PriorityQueue()
t = int(input())
for i in range(t):
   n, m = map(int, input().split())
   temp = list(map(int, input().split()))
   for j in range(len(temp)):
      q.put([temp[j], j])
      pq.put(-temp[j])
   j = 1
   while not q.empty():
      if q.queue[0][0] == -pq.queue[0]:
         if m == q.queue[0][1]:
            print(j)
            break
         j += 1
         q.get()
         pq.get()
      else:
         q.queue.rotate(-1)
   q.queue.clear()
   pq.queue.clear()