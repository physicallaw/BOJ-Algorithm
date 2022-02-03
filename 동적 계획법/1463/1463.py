n = int(input())
arr = [999999999] * (n + 1)
arr[1] = 0

for i in range(1, n + 1):
   if i * 3 < n + 1 and arr[i * 3] > arr[i] + 1:
      arr[i * 3] = arr[i] + 1
   if i * 2 < n + 1 and arr[i * 2] > arr[i] + 1:
      arr[i * 2] = arr[i] + 1
   if i < n and arr[i + 1] > arr[i] + 1:
      arr[i + 1] = arr[i] + 1
   
print(arr[n])