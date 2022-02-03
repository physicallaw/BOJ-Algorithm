answer = [0] * 3
for i in range(int(input())):
   a, b, c = map(int, input().split())
   answer = [a + min(answer[1], answer[2]), b + min(answer[0], answer[2]), c + min(answer[0], answer[1])]

print(min(answer))