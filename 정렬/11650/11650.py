import sys

n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = list(map(int,sys.stdin.readline().split()))

for a, b in sorted(arr):
   sys.stdout.write(str(a) + ' ' + str(b) + '\n')