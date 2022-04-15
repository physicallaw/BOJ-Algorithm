n, m = map(int, input().split())
arr = list(map(int, input().split()))
check = [0] * (m + 1)
s = 0
answer = 0
for i in range(len(arr)):
    if check[arr[i]]:
        continue
    if s < n:
        check[arr[i]] = 1
        s += 1
        continue
    a, b = -1, -1
    for j in range(1, m + 1):
        if check[j]:
            try:
                if arr[i + 1:].index(j) > a:
                    a, b = arr[i + 1:].index(j), j
            except:
                b = j
                break
    answer += 1
    check[b] = 0
    check[arr[i]] = 1
print(answer)