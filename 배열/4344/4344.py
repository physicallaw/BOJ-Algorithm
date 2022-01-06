c = int(input())
for i in range(c):
   score = list(map(int, input().split()))
   avg = sum(score[1:]) / score[0]
   ans = 0
   
   for j in range(1, len(score)):
       if score[j] > avg:
           ans += 1
   ans = ans / score[0] * 100
   print(format(ans, ".3f") + "%")