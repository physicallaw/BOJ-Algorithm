def preorder(arr1, arr2):
   if len(arr2) > 1:
      print(arr2[-1], end=' ')
      n = arr1.find(arr2[-1])
      preorder(arr1[:n], arr2[:n])
      preorder(arr1[n+1:], arr2[n:-1])
   elif len(arr2) == 1:
      print(arr2[-1], end=' ')

n = int(input())
arr1 = input().replace(' ', '')
arr2 = input().replace(' ', '')
preorder(arr1, arr2)