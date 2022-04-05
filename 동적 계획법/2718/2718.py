arr = [1, 1, 5, 11]
for i in range(4, 22):
    arr.append(2 * arr[-1] + 3 * arr[-2] - 2 * arr[-3])

for i in range(int(input())):
    print(arr[int(input())])