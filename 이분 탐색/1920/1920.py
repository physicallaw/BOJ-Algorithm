from bisect import bisect_left

n = int(input())
arr = list(map(int, input().split()))
arr.sort()

m = int(input())
question = list(map(int, input().split()))
for i in question:
   p = bisect_left(arr, i)
   print(1 if p < n and arr[p] == i else 0)