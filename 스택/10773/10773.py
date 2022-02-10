import sys

s = []
n = int(sys.stdin.readline())

for i in range(n):
   t = int(sys.stdin.readline())
   if t:
      s.append(t)
   else:
      s.pop()
print(sum(s))