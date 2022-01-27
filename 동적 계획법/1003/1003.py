MAX = 41
n = int(input())
arr = [[1, 0], [0, 1]]
for i in range(2, MAX):
   arr.append([arr[i - 2][0] + arr[i - 1][0], arr[i - 2][1] + arr[i - 1][1]])

for i in range(n):
   t = int(input())
   print(arr[t][0], arr[t][1])