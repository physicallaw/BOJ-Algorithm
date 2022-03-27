from itertools import combinations

n, k = map(int, input().split())
arr = sorted(list(map(int, input().split())))
for i in combinations(arr, k):
    for j in i:
        print(j, end=' ')
    print()