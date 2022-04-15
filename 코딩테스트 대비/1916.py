n = int(input())
m = int(input())
arr = []
for _ in range(n + 1):
    arr.append([])
for _ in range(m):
    a, b, c = map(int, input().split())
    arr[a].append([b, c])
