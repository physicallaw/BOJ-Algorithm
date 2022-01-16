n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = list(map(int, input().split()))

for i in range(n):
   answer = 1
   for j in range(n):
      if arr[i][0] < arr[j][0] and arr[i][1] < arr[j][1]:
            answer += 1
   print(answer)