def cut(arr, val):
   result = 0
   for i in arr:
      result += i // val
   return result

def check(arr, m, l, r):
   if cut(arr, r) >= m:
      return r
   if r - l == 1:
      return l
   mid = (l + r) // 2
   if cut(arr, mid) >= m:
      return check(arr, m, mid, r)
   return check(arr, m, l, mid-1)

n, m = map(int, input().split())
arr = [None] * n
for i in range(n):
   arr[i] = int(input())
print(check(arr, m, 0, max(arr)))