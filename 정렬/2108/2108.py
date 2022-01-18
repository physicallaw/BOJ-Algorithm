import sys
RANGE = 8001

n = int(sys.stdin.readline())
total, m, answer1, answer2 = 0, 0, 0, 0
arr = [None] * n
cnt = [0] * RANGE
for i in range(n):
   arr[i] = int(sys.stdin.readline())
   total += arr[i]
   cnt[arr[i] + RANGE // 2] += 1

arr.sort()
for i in range(RANGE):
   if m == cnt[i] and answer1 == answer2:
      answer2 = i - RANGE // 2
   elif m < cnt[i]:
      m, answer1, answer2 = cnt[i], i - RANGE // 2, i - RANGE // 2

print(f"%.0f" %(total / n))
print(arr[n // 2])
print(answer2)
print(arr[n - 1] - arr[0])