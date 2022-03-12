n, m = map(int, input().split())
arr = [i for i in range(n)]
for i in range(m):
   a, b = map(int, input().split())
   a -= 1
   b -= 1
   if arr[a] == a and arr[b] != b:
      a, b = b, a
   t = arr[b]
   for j in range(n):
      if arr[j] == t:
         arr[j] = arr[a]
print(len(set(arr)))