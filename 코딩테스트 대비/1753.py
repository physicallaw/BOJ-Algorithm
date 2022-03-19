n, m = map(int, input().split())
arr = []
for i in range(n):
   arr.append(int(input()))
answer = [0] * (m + 1)
answer[0] = 1
for i in arr:
   for j in range(i, m + 1):
      answer[j] += answer[j - i]
print(answer[-1])