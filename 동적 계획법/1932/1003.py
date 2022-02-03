n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = list(map(int, input().split()))

for i in range(1, n):
   for j in range(i + 1):
      if j == 0:
         arr[i][j] += arr[i - 1][j]
      elif j == i:
         arr[i][j] += arr[i - 1][j - 1]
      else:
         arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j])

print(max(arr[-1]))