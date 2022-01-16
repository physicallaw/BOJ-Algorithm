n, m = map(int, input().split())
answer = 999999999
arr = [None] * n

for i in range(n):
   s = input()
   arr[i] = [None] * m
   for j in range(m):
      if s[j] == 'B':
         arr[i][j] = 0
      else:
         arr[i][j] = 1

for i in range(0, n - 7):
   for j in range(0, m - 7):
      answer1, answer2 = 0, 0
      for k in range(i, i + 8):
         for l in range(j, j + 8):
            answer1 += arr[k][l] ^ ((k + l) % 2)
            answer2 += arr[k][l] ^ ((k + l + 1) % 2)
      answer = min(answer, answer1, answer2)
print(answer)