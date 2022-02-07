n = int(input())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
answer = arr1[0] * arr2[0]
for i in range(1, len(arr1)):
   arr2[i] = min(arr2[i - 1], arr2[i])
   answer += arr1[i] * arr2[i]
print(answer)