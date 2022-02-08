def gcd(a, b):
   return gcd(b, a % b) if b else a
def lcm(a, b):
   return a * b // gcd(a, b)

a, b = map(int, input().split())
print(gcd(a, b))
print(lcm(a, b))