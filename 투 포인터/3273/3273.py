n = int(input())
arr = list(map(int, input().split()))
x = int(input())

arr.sort()
l, r, answer = 0, n - 1, 0
while l < r:
   if arr[l] + arr[r] == x:
      answer += 1
   if arr[l] + arr[r] <= x:
      l += 1
   else:
      r -= 1
print(answer)