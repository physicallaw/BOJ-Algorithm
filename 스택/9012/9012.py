n = int(input())
arr = []

for i in range(n):
   s = input()
   for j in s:
      if len(arr) == 0 or j == '(':
         arr.append(True if j == '(' else False)
      elif arr[-1]:
         arr.pop()
      else:
         arr.append(False)
   if len(arr) == 0:
      print("YES")
   else:
      print("NO")
   arr.clear()