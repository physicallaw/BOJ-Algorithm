def hanoi(n, a, b):
   if n == 1:
      print(a + 1, b + 1)
      return
   hanoi(n - 1, a, 3 - a - b)
   hanoi(1, a, b)
   hanoi(n - 1, 3 - a - b, b)

n = int(input())
print(pow(2,n) - 1)
hanoi(n, 0, 2)