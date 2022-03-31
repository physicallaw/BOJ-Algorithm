arr = [1, 2, 7, 22]
for i in range(4, 1000001):
    arr.append((3 * arr[-1] + arr[-2] - arr[-3]) % 1000000007)
print(arr[int(input())])