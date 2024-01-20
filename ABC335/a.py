import re
s = input()
if re.search(r'\w{4}$', s):
    print(re.sub(r'\w{4}$', '2024', s))