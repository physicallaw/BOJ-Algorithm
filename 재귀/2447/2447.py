import sys

def star(i, j, n):
   if (i // n) % 3 == 1 and (j // n) % 3 == 1:
      return ' '
   elif(n // 3 == 0):
      return '*'
   else:
      return star(i, j, n//3)

n = int(input())
s = [None] * (n + 1) * n
for i in range(n):
   for j in range(n):
      s[i * (n + 1) + j] = star(i, j, n)
   s[i * (n + 1) - 1] = '\n'
sys.stdout.write(''.join(s))