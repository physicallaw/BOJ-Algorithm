s = input().split('-')
s = list(map(lambda x : sum(map(int, x.split('+'))), s))
print(s[0] * 2 - sum(s))