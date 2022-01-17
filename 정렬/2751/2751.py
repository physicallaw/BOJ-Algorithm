import sys

n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = int(sys.stdin.readline())

for i in sorted(arr):
   sys.stdout.write(str(i) + '\n')