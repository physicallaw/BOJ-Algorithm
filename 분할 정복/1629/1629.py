def cal(a, b, c):
   answer = 1
   while b > 0:
      if b % 2:
         answer = answer * a % c
      a = a * a % c
      b //= 2
   return answer

a, b, c = map(int, input().split())
print(cal(a, b, c))