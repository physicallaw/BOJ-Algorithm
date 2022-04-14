n, m = map(int, input().split())

def gcd(a, b):
    if b:
        return gcd(b, a % b)
    return a

print(gcd(n, m))