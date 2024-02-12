s = input()
for i in range(len(s)):
    if i == 0:
        if not s[i].isupper():
            print("No")
            exit()
    else:
        if s[i].isupper():
            print("No")
            exit()
print("Yes")



