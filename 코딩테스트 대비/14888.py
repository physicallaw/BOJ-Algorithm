from itertools import permutations

n = int(input())
num = list(map(int, input().split()))
op = list(map(int, input().split()))
arr, answer = [], []
for i in range(4):
    arr += [i] * op[i]
for i in permutations(arr, n - 1):
    temp = num[0]
    for j in range(n - 1):
        if i[j] == 0:
            temp += num[j + 1]
        elif i[j] == 1:
            temp -= num[j + 1]
        elif i[j] == 2:
            temp *= num[j + 1]
        else:
            if temp > 0:
                temp //= num[j + 1]
            else:
                temp = -(-temp // num[j + 1])
    answer.append(temp)
print(max(answer))
print(min(answer))