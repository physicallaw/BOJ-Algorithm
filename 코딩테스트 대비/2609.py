def gcd(a, b):
    if b:
        return gcd(b, a % b)
    return a

n, m = map(int, input().split())
print(gcd(n, m))
print(n * m // gcd(n, m))