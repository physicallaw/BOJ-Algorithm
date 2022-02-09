def gcd(a, b):
   return gcd(b, a % b) if b else a

n = int(input())
arr = list(map(int, input().split()))

for i in range(1, n):
   t = gcd(arr[0], arr[i])
   print("%d/%d" % (arr[0] // t, arr[i] // t))