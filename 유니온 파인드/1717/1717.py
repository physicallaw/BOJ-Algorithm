n, m = map(int, input().split())
arr = [{i} for i in range(n)]
for i in range(m):
   a, b, c = map(int, input().split())
   if (a == 0):
      arr[b - 1].union(arr[c - 1])
      arr[c - 1].union(arr[a - 1])
   else:
      if arr[b - 1] & {c - 1}:
         print('YES')
      else:
         print('NO')