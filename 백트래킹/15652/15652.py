def nandm(arr, n, m):
   if m == 0:
      for i in arr:
         print(i, end=' ')
      print()
      return
   for i in range(n):
      if arr and arr[-1] > i + 1:
         continue
      temp = arr.copy()
      temp.append(i + 1)
      nandm(temp, n, m - 1)
  
n, m = map(int, input().split())
nandm([], n, m)