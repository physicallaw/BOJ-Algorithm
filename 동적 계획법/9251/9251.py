s1 = input()
s2 = input()
answer = [0] * (len(s2) + 1)
for i in s1:
   temp = [0] * (len(s2) + 1)
   k = 1
   for j in s2:
      if i == j:
         temp[k] = max(answer[k - 1] + 1, answer[k])
      else:
         temp[k] = max(temp[k - 1], answer[k])
      k += 1
   answer = temp
print(max(answer))