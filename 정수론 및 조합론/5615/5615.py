import random


def isPrime(n):
    if n == 2:
        return True
    if n < 2 or n % 2 == 0:
        return False
    def mrtest(b):
        x = pow(b, t, n)
        if x == 1:
            return False
        for i in range(s):
            if x == n - 1:
                return False
            x = pow(x, 2, n)
        return True
    s = 0
    t = n - 1
    while t % 2 == 0:
        s += 1
        t //= 2
    for i in range(10):
        b = random.randrange(2, n)
        if mrtest(b):
            return False
    return True


answer = 0
for i in range(int(input())):
    n = int(input())
    if isPrime(2 * n + 1):
        answer += 1
print(answer)
