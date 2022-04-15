n, m = map(int, input().split())
arr = list(map(int, input().split()))
s = [arr[0]]
answer = 0
for i in range(1, m):
    if s[0] > arr[i]:
        s.append(arr[i])
    else:
        while len(s) > 0:
            answer += s[0] - s[-1]
            s.pop()
        s.append(arr[i])

arr = s[-1::-1]
s = [arr[0]]
for i in range(1, len(arr)):
    if s[0] > arr[i]:
        s.append(arr[i])
    else:
        while len(s) > 0:
            answer += s[0] - s[-1]
            s.pop()
        s.append(arr[i])

print(answer)