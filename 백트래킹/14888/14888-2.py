def next_permutation(arr):
   first, last = 0, len(arr)
   if first == last:
      return False
   i = last - 1
   if first == i:
      return False

   while True:
      i1 = i
      i -= 1
      if arr[i] < arr[i1]:
         i2 = last
         i2 -= 1
         while arr[i] >= arr[i2]:
            i2 -= 1
         swap(arr, i, i2)
         reverse(arr, i1, last)
         return True
      if i == first:
         reverse(arr, first, last)
         return False

def reverse(arr, first, last):
   while first < last:
      last -= 1
      swap(arr, first, last)
      first += 1

def swap(arr, a, b):
   arr[a], arr[b] = arr[b], arr[a]

n = int(input())
m, M = 999999999, -999999999
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
op = []
for i in range(4):
   for j in range(arr2[i]):
      op.append(i)
while True:
   temp = arr1[0]
   for i in range(1, n):
      if op[i - 1] == 0:
         temp += arr1[i]
      elif op[i - 1] == 1:
         temp -= arr1[i]
      elif op[i - 1] == 2:
         temp *= arr1[i]
      else:
         temp = int(temp / arr1[i])
   if temp > M:
      M = temp
   if temp < m:
      m = temp
   if not next_permutation(op):
      break
print(M)
print(m)