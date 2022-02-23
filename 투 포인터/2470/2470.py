n = int(input())
m = 2000000000
arr = list(map(int, input().split()))

arr.sort()
l, r = 0, n - 1
a, b = 0, 0
while l < r:
   if m > abs(arr[l] + arr[r]):
      a, b = arr[l], arr[r]
      m = abs(arr[l] + arr[r])
   if arr[l] + arr[r] < 0:
      l += 1
   elif arr[l] + arr[r] > 0:
      r -= 1
   else:
      break
print(a, b)