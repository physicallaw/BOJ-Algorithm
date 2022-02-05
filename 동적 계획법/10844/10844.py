arr = [0, 1, 1, 1, 1, 1, 1, 1, 1, 1]
n = int(input())

for i in range(n - 1):
   arr = [arr[1],
      arr[0] + arr[2],
      arr[1] + arr[3],
      arr[2] + arr[4],
      arr[3] + arr[5],
      arr[4] + arr[6],
      arr[5] + arr[7],
      arr[6] + arr[8],
      arr[7] + arr[9],
      arr[8]
      ]
   
print(sum(arr) % 1000000000)