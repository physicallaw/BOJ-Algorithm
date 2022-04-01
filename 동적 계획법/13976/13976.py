def mul(a, b):
    return [[(a[0][0]*b[0][0] + a[0][1]*b[1][0]) % 1000000007,
            (a[0][0]*b[0][1] + a[0][1]*b[1][1]) % 1000000007],
            [(a[1][0]*b[0][0] + a[1][1]*b[1][0]) % 1000000007,
            (a[1][0]*b[0][1] + a[1][1]*b[1][1]) % 1000000007]]

n = int(input())
if n % 2 == 1:
    print(0)
else:
    n //= 2
    arr = [[4, 1], [-1, 0]]
    answer = [[3, 1], [1, 1]]
    while n > 1:
        if n % 2:
            answer = mul(answer, arr)
        arr = mul(arr, arr)
        n //= 2
    if n:
        answer = mul(answer, arr)
    print(answer[0][1])