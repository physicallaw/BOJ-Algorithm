from bisect import bisect_left

n = int(input())
arr = list(map(int, input().split()))
answer = [arr[0]]

for i in range(1, n):
   it = bisect_left(answer, arr[i])
   if it == len(answer):
      answer.append(arr[i])
   else:
      answer[it] = arr[i]

print(len(answer))