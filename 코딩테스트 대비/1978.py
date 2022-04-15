prime = [1] * 2 + [0] * 999
for i in range(2, 1001):
    for j in range(i * 2, 1001, i):
        prime[j] = 1
n = int(input())
arr = list(map(int, input().split()))
for i in arr:
    if prime[i]:
        n -= 1
print(n)