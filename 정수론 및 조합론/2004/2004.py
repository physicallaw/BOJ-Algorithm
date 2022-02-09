def cal(n, f):
   result = 0
   while (n >= f):
      n //= f
      result += n
   return result

n, m = map(int, input().split())
print(min(cal(n, 2) - cal(m, 2) - cal(n - m, 2), 
   cal(n, 5) - cal(m, 5) - cal(n - m, 5)))