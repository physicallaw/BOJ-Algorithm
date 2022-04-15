def bracket(s):
    if len(s) == 2:
        if s[0] == '(' and s[1] == ')':
            return 2
        if s[0] == '[' and s[1] == ']':
            return 3
        return 0
    answer, l = 0, 0
    for r in range(1, len(s) + 1):
        if count(s[l:r]) and (l != 0 or r != len(s)):
            t = bracket(s[l:r])
            if t:
                answer += t
            else:
                return 0
            l = r
    if answer == 0:
        if s[0] == '(' and s[-1] == ')':
            answer = 2 * bracket(s[1:-1])
        elif s[0] == '[' and s[-1] == ']':
            answer = 3 * bracket(s[1:-1])
        else:
            return 0
    return answer

def count(s):
    if s.count('(') != s.count(')'):
        return 0
    if s.count('[') != s.count(']'):
        return 0
    return 1

s = input()
if count(s):
    print(bracket(s))
else:
    print(0)