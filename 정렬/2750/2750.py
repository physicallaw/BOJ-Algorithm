n = int(input())
arr = [None] * n
for i in range(n):
   arr[i] = int(input())

arr.sort()
for i in arr:
   print(i)