import sys

n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = sys.stdin.readline()

arr.sort(key = lambda x: (len(x), x))

sys.stdout.write(arr[0])
for i in range(1, n):
   if arr[i - 1] != arr[i]:
      sys.stdout.write(arr[i])