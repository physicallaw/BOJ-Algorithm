import sys
sys.setrecursionlimit(10**6)

arr =[]
m = 0
for i in range(2001):
   arr.append([-1] * 2001)

def get(val, mod):
   answer = []
   while val > 0:
      r = val % mod
      answer.append(r)
      val //= mod
   return answer

def comb(n, r):
   if n < r:
      return 0
   if (n // 2 < r):
      r = n - r
   if arr[n][r] != -1:
      pass
   elif r == 0:
      arr[n][r] = 1
   elif r == 1:
      arr[n][r] = n
   else:
      arr[n][r] = (comb(n - 1, r - 1) + comb(n - 1, r)) % m
   return arr[n][r]

n, k, m = map(int, input().split())
answer = 1
arr1, arr2 = get(n, m), get(k, m)
for i in range(min(len(arr1), len(arr2))):
   answer = answer * comb(arr1[i], arr2[i]) % m
print(answer)