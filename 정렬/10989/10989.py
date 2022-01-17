import sys
MAX = 10001

n = int(sys.stdin.readline())
arr = [0] * MAX
for i in range(n):
   temp = int(sys.stdin.readline())
   arr[temp] += 1

for i in range(MAX):
   for j in range(arr[i]):
      sys.stdout.write(str(i) + '\n')