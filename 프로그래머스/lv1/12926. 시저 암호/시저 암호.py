def solution(s, n):
    ans = ''

    for i in range(len(s)):
        if s[i] == ' ':
            ans += ' '
        else:
            if 65 <= ord(s[i]) and ord(s[i]) <= 90 and (ord(s[i]) + n >= 91):
                ans += chr(ord(s[i])+n-26)
            elif 97 <= ord(s[i]) and ord(s[i]) <= 122 and (ord(s[i]) + n >= 123):
                ans += chr(ord(s[i])+n-26)
            else:
                ans += chr(ord(s[i])+n)

    return ans