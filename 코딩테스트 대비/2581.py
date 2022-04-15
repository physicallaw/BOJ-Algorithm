m = int(input())
n = int(input())
prime = [0] * 2 + [1] * 9999
for i in range(2, 10001):
    for j in range(i * 2, 10001, i):
        prime[j] = 0

arr = []
for i in range(m, n + 1):
    if prime[i]:
        arr.append(i)

if arr:
    print(sum(arr))
    print(arr[0])
else:
    print(-1)