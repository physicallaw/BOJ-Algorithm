def count(arr):
   n, s = len(arr), 0
   for i in range(n):
      for j in range(n):
         if arr[i][j] == '1':
            s += 1
   if s == n * n:
      print(1, end = '')
   elif s == 0:
      print(0, end = '')
   else:
      print('(', end='')
      temp = [None] * (n // 2)
      for i in range(2):
         for j in range(2):
            for k in range(n//2):
               temp[k] = arr[i * n // 2 + k][j * n // 2 : j * n // 2 + n // 2]
            count(temp)
      print(')', end='')

n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = input()
count(arr)