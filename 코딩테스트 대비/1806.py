n, m = map(int, input().split())
arr = list(map(int, input().split()))
l, r = 0, 0
s = 0
answer = 999999
while r < n:
    if s < m:
        s += arr[r]
        r += 1
    else:
        s -= arr[l]
        l += 1
    if s >= m:
        answer = min(answer , r - l)
while l < n:
    s -= arr[l]
    l += 1
    if s >= m:
        answer = min(answer , r - l)

print(answer if answer != 999999 else 0)