def count(arr):
   n, s, cnt = len(arr), 0, 0
   result = [0] * 3
   for i in range(n):
      for j in range(n):
         s += arr[i][j]
         if arr[i][j] == 0:
            cnt += 1
   if s == -n * n:
      result[0] += 1
   elif cnt == n * n:
      result[1] += 1
   elif s == n * n:
      result[2] += 1
   else:
      temp = [None] * (n // 3)
      for i in range(3):
         for j in range(3):
            for k in range(n // 3):
               temp[k] = arr[i * n // 3 + k][j * n // 3 : j * n // 3 + n // 3]
            result2 = count(temp)
            result[0] += result2[0]
            result[1] += result2[1]
            result[2] += result2[2]
   return result

n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = list(map(int, input().split()))
answer = count(arr)
for i in range(3):
   print(answer[i])