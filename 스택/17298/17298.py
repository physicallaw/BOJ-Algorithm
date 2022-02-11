n = int(input())
s = []
arr = list(map(int, input().split()))
answer = [0] * n

for i in range(n - 1, -1, -1):
   while len(s) and s[-1] <= arr[i]:
      s.pop()
   answer[i] = s[-1] if len(s) else -1
   s.append(arr[i])
for i in answer:
   print(i, end=' ')