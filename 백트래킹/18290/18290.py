from itertools import combinations

def check(arr):
    for i in arr:
        for j in arr:
            if i != j:
                if (i[1] + 1, i[2]) == (j[1], j[2]) or (i[1] - 1, i[2]) == (j[1], j[2]) or (i[1], i[2] + 1) == (j[1], j[2]) or (i[1], i[2] - 1) == (j[1], j[2]):
                    return False
    return True

n, m, k = map(int, input().split())
arr, brr = [], []
for i in range(n):
    arr.append(list(map(int, input().split())))
for i in range(n):
    for j in range(m):
        brr.append([arr[i][j], i, j])

answer = -999999999
for i in combinations(brr, k):
    if check(i):
        answer = max(answer, sum(j[0] for j in i))
print(answer)