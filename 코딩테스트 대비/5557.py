answer = [0] * 21
n = int(input())
arr = list(map(int, input().split()))
answer[arr[0]] += 1
for i in range(1, n - 1):
   temp = [0] * 21
   for j in range(arr[i], 21):
      temp[j] += answer[j - arr[i]]
   for j in range(0, 21 - arr[i]):
      temp[j] += answer[j + arr[i]]
   answer = temp
print(answer[arr[-1]])