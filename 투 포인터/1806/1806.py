n, m = map(int, input().split())
arr = list(map(int, input().split()))
answer = 100000

l, r, s = 0, 1, arr[0];
while r <= n:
   if s >= m:
      answer = min(answer,  r - l)
      s -= arr[l]
      l += 1
   elif r < n:
      s += arr[r]
      r += 1
   else:
      r += 1

print(0) if answer == 100000 else print(answer)