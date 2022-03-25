def EEA(a, b):
   if b == 1:
      return 1, a + 1
   if a == 1:
      return 1, b
   r1, r2 = a, b
   s1, s2 = 1, 0
   t1, t2 = 0, 1
   while r2:
      q = r1 // r2
      r1, r2 = r2, r1 % r2
      s1, s2 = s2, s1 - q * s2
      t1, t2 = t2, t1 - q * t2
   return r1, (a + t1) % a

t = int(input())
for i in range(t):
   a, b = map(int, input().split())
   a, b = EEA(a, b)
   if a == 1 and b <= 1000000000:
      print(b)
   else:
      print('IMPOSSIBLE')