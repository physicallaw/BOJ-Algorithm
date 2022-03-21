n, m = map(int, input().split())
arr = []
for i in range(n):
   arr.append(list(map(int, input().split())))
answer = [0] * (m + 1)
for i in range(n):
   temp = [0] * (m + 1)
   for j in range(1, m + 1):
      if j - arr[i][0] < 0:
         temp[j] = answer[j]
      else:
         temp[j] = max(answer[j], answer[j - arr[i][0]] + arr[i][1])
   answer = temp
print(answer[-1])