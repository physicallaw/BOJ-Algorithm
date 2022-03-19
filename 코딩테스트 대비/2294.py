n, m = map(int, input().split())
arr = []
for i in range(n):
   arr.append(int(input()))
answer = [999999999] * (m + 1)
answer[0] = 0
for i in arr:
   for j in range(i, m + 1):
      answer[j] = min(answer[j] , answer[j - i] + 1)
print(-1 if answer[-1] == 999999999 else answer[-1])