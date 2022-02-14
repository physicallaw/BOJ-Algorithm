from itertools import permutations

n = int(input())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
op = []
M, m = -999999999, 999999999
for _ in range(arr2[0]): op.append('+')
for _ in range(arr2[1]): op.append('-')
for _ in range(arr2[2]): op.append('*')
for _ in range(arr2[3]): op.append('/')

for i in permutations(op, len(op)):
   temp = arr1[0]
   for j in range(len(i)):
      if i[j] == '+':
         temp += arr1[j + 1]
      elif i[j] == '-':
         temp -= arr1[j + 1]
      elif i[j] == '*':
         temp *= arr1[j + 1]
      else:
         temp = int(temp / arr1[j + 1])
   M = max(M, temp)
   m = min(m, temp)
print(M)
print(m)