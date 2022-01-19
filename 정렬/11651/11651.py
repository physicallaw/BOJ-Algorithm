import sys

n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = list(map(int,sys.stdin.readline().split()))

for a, b in sorted(arr, key = lambda x: (x[1], x[0])):
   sys.stdout.write(str(a) + ' ' + str(b) + '\n')