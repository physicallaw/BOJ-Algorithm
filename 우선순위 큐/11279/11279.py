from queue import PriorityQueue
from sys import stdin

n = int(stdin.readline())
q = PriorityQueue()
answer = ''

for i in range(n):
   x = int(stdin.readline())
   if x:
      q.put(-x)
   elif q.empty():
      answer += '0\n'
   else:
      answer += f'{-q.get()}\n'
print(answer)