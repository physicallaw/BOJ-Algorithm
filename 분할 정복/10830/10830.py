def dot(a, b):
   x, y, z = len(a), len(b[0]), len(b)
   result = []
   for i in range(x):
      temp = []
      for j in range(y):
         m = 0
         for k in range(z):
            m += a[i][k]*b[k][j]
         temp.append(m % 1000)
      result.append(temp)
   return result

n, b = map(int, input().split())
arr = [None] * n
for i in range(n):
   arr[i] = list(map(int, input().split()))
answer = [None] * n
for i in range(n):
   answer[i] = [0] * n
   answer[i][i] = 1

while b > 0:
   if b % 2 == 1:
      answer = dot(answer, arr)
   arr = dot(arr, arr)
   b //= 2
for i in range(n):
   for j in range(n):
      print(int(answer[i][j]), end=' ')
   print()