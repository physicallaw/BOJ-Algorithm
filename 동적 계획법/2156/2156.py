n = int(input())
arr, answer = [0] * (n + 3), [0] * (n + 3)
for i in range(3, n + 3):
   arr[i] = int(input())

for i in range(3, n + 3):
   answer[i] = max(answer[i - 1], arr[i] + max(answer[i - 3] + arr[i - 1], answer[i - 2]))
print(answer[n + 2])