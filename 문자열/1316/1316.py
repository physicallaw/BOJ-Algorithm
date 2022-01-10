class string(str):
   def find_not(self, c):
      for i in range(len(self)):
         if (self[i] != c):
            return i
      return len(self)

n = int(input())
answer = 0

for i in range(n):
   s = input()
   for j in range(len(s)):
      if s[j:].rfind(s[j]) != string(s[j:]).find_not(s[j]) - 1:
         answer -= 1
         break
   answer += 1

print(answer)