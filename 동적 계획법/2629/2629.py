n = int(input())
weight = list(map(int, input().split()))
d = {0:1}
for i in weight:
   for j in list(d.keys()):
      d[abs(j - i)] = 1
      if i + j <= 40000:
         d[i + j] = 1
m = int(input())
test = list(map(int, input().split()))
for i in test:
   if d.get(i):
      print('Y', end=' ')
   else:
      print('N', end=' ')