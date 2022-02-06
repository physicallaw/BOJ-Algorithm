n, price = map(int, input().split())
answer = 0
coin = [None] * n
for i in range(n):
   coin[i] = int(input())

for i in coin[::-1]:
   answer += price // i
   price %= i

print(answer)