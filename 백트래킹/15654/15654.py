from itertools import permutations

n, k = map(int, input().split())
arr = sorted(list(map(int, input().split())))
for i in permutations(arr, k):
    for j in i:
        print(j, end=' ')
    print()