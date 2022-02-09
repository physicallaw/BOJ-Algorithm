n = int(input())
answer = 0
for i in range(5, n + 1, 5):
   while i and i % 5 == 0:
      answer += 1
      i //= 5
print(answer)