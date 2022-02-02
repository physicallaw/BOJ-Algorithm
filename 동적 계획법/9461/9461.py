arr = [0, 1, 1, 1, 2]
for i in range(5, 101):
   arr.append(arr[i - 1] + arr[i - 5])

n = int(input())
for i in range(n):
   print(arr[int(input())])