def count(arr):
   answer = [0, 0]
   n, s = len(arr), 0
   for i in range(n):
      for j in range(n):
         s += arr[i][j]
   if s == 0:
      answer[0] += 1
   elif s == n * n:
      answer[1] += 1
   else:
      temp = [None] * (n // 2)
      for i in range(2):
         for j in range(2):
            for k in range(n // 2):
               temp[k] = arr[i * n // 2 + k][j * n // 2 : j * n // 2 + n // 2]
            result = count(temp)
            answer[0] += result[0]
            answer[1] += result[1]
   return answer

n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = list(map(int, input().split()))

answer = count(arr)
print(answer[0])
print(answer[1])