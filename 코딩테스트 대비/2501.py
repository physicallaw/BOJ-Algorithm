n, m = map(int, input().split())
answer = 0
for i in range(1, n + 1):
    if n % i == 0:
        m -= 1
    if m == 0:
        answer = i
        break
print(answer)