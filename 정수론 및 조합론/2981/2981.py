import math

def gcd(a, b):
   return gcd(b, a % b) if b else a

n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = int(input())

m = 0
for i in range(n):
   for j in range(i + 1, n):
      m = gcd(abs(arr[i] - arr[j]), m)

answer = []
for i in range(1, int(math.sqrt(m)) + 1):
   if m % i == 0:
      answer.append(i)
      answer.append(m // i)
answer.sort()
for i in range(1, len(answer)):
   if answer[i] != answer[i - 1]:
      print(answer[i], end = ' ')