from bisect import bisect_left, bisect_right

n = int(input())
arr = list(map(int, input().split()))
arr.sort()

m = int(input())
question = list(map(int, input().split()))
for i in question:
   print(bisect_right(arr, i) - bisect_left(arr, i))