from math import sqrt

arr1 = [0, 1, 3]
arr2 = [0, 1, 3]
for i in range(3, 1001):
   arr1.append(2 * arr1[-1] + 1)
   k = i + 1 - round(sqrt(2 * i + 1))
   arr2.append(arr1[i - k] + 2 * arr2[k])

i = 1
while True:
   try:
      n = int(input())
      print(f'Case {i}: {arr2[n]}')
      i += 1
   except:
      break