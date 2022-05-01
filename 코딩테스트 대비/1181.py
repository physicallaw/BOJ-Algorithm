n = int(input())
arr = []
for i in range(n):
    arr.append(input())
arr.sort(key=lambda x: (len(x), x))

print(arr[0])
for i in range(1, n):
    if arr[i - 1] != arr[i]:
        print(arr[i])