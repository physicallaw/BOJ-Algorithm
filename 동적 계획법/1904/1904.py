n = int(input())
a, b = 1, 1

for i in range(n - 1):
   a, b = b, (a + b) % 15746

print(b)