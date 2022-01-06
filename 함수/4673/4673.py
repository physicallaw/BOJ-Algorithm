MAX = 10001

def self_num(n):
    answer = n
    while n > 0:
        answer += n % 10
        n //= 10

    return answer

check = [True] * MAX

for i in range(1, MAX):
    n = self_num(i)
    if n < MAX:
        check[n] = False;

for i in range(1, MAX):
    if check[i]:
        print(i)