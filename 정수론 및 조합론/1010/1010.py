t = int(input())
arr = [None]  * (31)
for i in range(31):
   arr[i] = [1] * (i + 1)
   for j in range(1, i):
      arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]

for i in range(t):
   k, n = map(int, input().split())
   print(arr[n][k])