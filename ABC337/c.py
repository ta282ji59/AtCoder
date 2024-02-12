n = int(input())
a = list(map(int, input().split()))

result = [-1] * n
st = -1
for i in range(n):
    if a[i] == -1:
        st = i
    else:
        result[a[i]-1] = i
    print(result)

for i in range(n):
    print(st+1,end=' ')
    st = result[st]