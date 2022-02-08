import sys

def gcd(a, b):
   if a < b:
      return gcd(b, a)
   if a == b:
      return a
   return gcd(a - b, b)
def lcm(a, b):
   n = a
   while n % b:
      n += a
   return n

sys.setrecursionlimit(10000)
a, b = map(int, input().split())
print(gcd(a,b))
print(lcm(a, b))