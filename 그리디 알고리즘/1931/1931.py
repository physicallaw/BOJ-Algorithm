n = int(input())
check, answer = 0, 0
arr = [None] * n
for i in range(n):
   arr[i] = list(map(int, input().split()))
arr.sort(key = lambda x: [x[1], x[0]])

for i in range(n):
   if check <= arr[i][0]:
      answer += 1
      check = arr[i][1]

print(answer)