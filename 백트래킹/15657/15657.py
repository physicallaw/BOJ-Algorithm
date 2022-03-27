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
            if len(b) == 0 or b[-1] <= i:
                permutations(a, b + [i])
    
permutations(arr, [])