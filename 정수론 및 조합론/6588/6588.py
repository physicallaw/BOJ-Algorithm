def notation(n):
    if n < 10:
        return(str(n))
    else:
        return(chr(n + 55))

n, m = map(int, input().split())
s = ''
while n >= m:
    s += notation(n % m)
    n //= m
s += notation(n % m)
print(s[::-1])