n = int(input())
m = int(input())
arr = []
for _ in range(n):
    arr.append([])
for _ in range(m):
    a, b, c = map(int, input().split())
    arr[a - 1].append([b - 1, c])
a, b = map(int, input().split())
a, b = a - 1, b - 1
cnt, check = [999999999] * n, [1] * n
cnt[a] = 0
while True:
    check[a] = 0
    for i in range(len(arr[a])):
        if cnt[arr[a][i][0]] > cnt[a] + arr[a][i][1]:
            cnt[arr[a][i][0]] = cnt[a] + arr[a][i][1]
    t = 999999999
    for i in range(n):
        if check[i] and cnt[i] < t:
            t, c = cnt[i], i
    if t == 999999999:
        break
    a = c
print(cnt[b])