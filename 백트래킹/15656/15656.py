n, k = map(int, input().split())
arr = sorted(list(map(int, input().split())))

def printper(a):
    for i in a:
        print(i, end=' ')
    print()

def permutations(a, b):
    if len(b) == k:
        printper(b)
    else:
        for i in a:
            permutations(a, b + [i])
    
permutations(arr, [])