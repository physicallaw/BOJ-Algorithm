def mul(a, b):
    return [[(a[0][0]*b[0][0] + a[0][1]*b[1][0])%10000, (a[0][0]*b[0][1] + a[0][1]*b[1][1])%10000],
            [(a[1][0]*b[0][0] + a[1][1]*b[1][0])%10000, (a[1][0]*b[0][1] + a[1][1]*b[1][1])%10000]]

n = int(input())
while n != -1:
    answer = [[1, 0], [0, 1]]
    arr = [[0, 1],[1, 1]]
    while n > 1:
        if n % 2:
            answer = mul(answer, arr)
        n //= 2
        arr = mul(arr, arr)
    if n:
        answer = mul(answer, arr)
    print(answer[0][1])
    n = int(input())