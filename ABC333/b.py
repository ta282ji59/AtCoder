def change(c):
    if c == 'A':
        return 0
    elif c == 'B':
        return 1
    elif c == 'C':
        return 2
    elif c == 'D':
        return 3
    elif c == 'E':
        return 4

s = input()
s1 = s[0]
s2 = s[1]
t = input()
t1 = t[0]
t2 = t[1]

s1 = int(change(s1))
s2 = int(change(s2))
t1 = int(change(t1))
t2 = int(change(t2))

s = abs(s1-s2)
t = abs(t1-t2)

if s==t or (s==1 and t==4) or  (s==4 and t==1) or  (s==2 and t==3) or  (s==3 and t==2):
    print("Yes")
else:
    print("No")


