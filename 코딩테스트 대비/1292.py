arr = []
for i in range(1, 46):
   arr += [i] * i
a, b = map(int, input().split())
print(sum(arr[a - 1: b]))