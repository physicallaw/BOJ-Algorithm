def dot(a, b):
   x, y, z = len(a), len(b[0]), len(b)
   result = []
   for i in range(x):
      temp = []
      for j in range(y):
         m = 0
         for k in range(z):
            m += a[i][k]*b[k][j]
         temp.append(m % 1000000007)
      result.append(temp)
   return result

n = int(input())
arr = [[0, 1], [1, 1]]
answer = [[1, 0], [0, 1]]
while n > 0:
   if n % 2:
      answer = dot(answer, arr)
   arr = dot(arr, arr)
   n //= 2
print(answer[0][1])