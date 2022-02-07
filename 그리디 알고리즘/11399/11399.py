n = int(input())
answer = 0
arr = list(map(int, input().split()))
arr.sort(reverse = True)

for i in range(len(arr)):
   answer += arr[i] * (i + 1)
print(answer)