import re

a = input()
b = input()
print(1 if re.findall(b, a) else 0)