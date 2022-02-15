mod = 1000000007

def factorial(n):
   result = 1
   for i in range(n):
      result = result * (i + 1) % mod
   return result

def pow(n):
   result = 1
   for i in bin(mod - 2)[-1:1:-1]:
      if int(i):
         result = result * n % mod
      n = n * n % mod
   return result

n, k = map(int, input().split())
print(factorial(n) * pow(factorial(n - k) * factorial(k)) % mod)