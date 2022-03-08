from queue import PriorityQueue
from sys import stdin

n = int(stdin.readline())
q1, q2 = PriorityQueue(), PriorityQueue()
answer = ''

for i in range(n):
   x = int(stdin.readline())
   if x < 0:
      q1.put(-x)
   elif x > 0:
      q2.put(x)
   elif q1.empty() and q2.empty():
      answer += '0\n'
   elif ~q1.empty() and q2.empty():
      answer += f'{-q1.get()}\n'
   elif q1.empty() and ~q2.empty():
      answer += f'{q2.get()}\n'
   elif q1.queue[0] <= q2.queue[0] :
      answer += f'{-q1.get()}\n'
   else:
      answer += f'{q2.get()}\n'
print(answer)