for i in range(int(input())):
    n = int(input())
    s = ''
    while n > 1:
        if n % 2:
            s += '1'
        else:
            s += '0'
        n //= 2
    s += str(n)
    for j in range(len(s)):
        if s[j] == '1':
            print(j, end=' ')