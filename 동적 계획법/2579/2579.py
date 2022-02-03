n = int(input())
arr, answer = [0] * (n + 2), [0] * (n + 2)
for i in range(2, n + 2):
   arr[i] = int(input())
  
answer[2] = arr[2]
for i in range(3, n + 2):
   answer[i] = arr[i] + max(answer[i - 3] + arr[i - 1], answer[i - 2])
print(answer[n + 1])