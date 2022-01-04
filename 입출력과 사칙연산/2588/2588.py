a, b = map(int, input().split())
print(b % 10 * a, b / 10 % 10 * a, b / 100 * a, a * b, sep="\n")