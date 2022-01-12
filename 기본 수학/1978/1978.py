M = 1001
answer = 0
prime = [1] * M
prime[0], prime[1] = 0, 0
for i in range(2, M):
   for j in range(i*2, M, i):
      prime[j] = 0

n = int(input())
arr = list(map(int, inputs().split()))
for i in arr:
   if prime[i]:
      answer += 1
print(answer)