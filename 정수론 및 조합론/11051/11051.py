n, k = map(int, input().split())
arr = [None]  * (n + 1)
for i in range(n + 1):
   arr[i] = [1] * (i + 1)
   for j in range(1, i):
      arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]) % 10007
print(arr[n][k])