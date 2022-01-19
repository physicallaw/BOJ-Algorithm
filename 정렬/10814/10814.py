import sys

n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = sys.stdin.readline().split()
   arr[i][0] = int(arr[i][0])

arr.sort(key = lambda x: x[0])

for i in range(0, n):
   sys.stdout.write(str(arr[i][0]) + " " + arr[i][1] + "\n")