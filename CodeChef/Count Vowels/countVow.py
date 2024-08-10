# Solution
str = input()
ans = 0
i = 0
while i < len(str):
    c = str[i]
    if c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u':
        ans += 1
    i += 1
    
print(ans)
