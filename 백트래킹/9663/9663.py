def find(arr, val):
   for i in range(len(arr)):
      if arr[i] == val:
         return i
      if arr[i] - i == val - len(arr):
         return i
      if arr[i] + i == val + len(arr):
         return i
   return -1

def nqueen(arr, n):
   if (len(arr) == n):
      return 1
   answer = 0
   for i in range(n):
      if find(arr, i) != -1:
         continue
      temp = arr.copy()
      temp.append(i)
      answer += nqueen(temp, n)
   return answer
  
n = int(input())
print(nqueen([], n))