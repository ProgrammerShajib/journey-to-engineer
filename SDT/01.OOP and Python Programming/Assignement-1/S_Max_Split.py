
s = input()

balance = 0
start = 0
ans = []

for i in range(len(s)):

    if s[i] == 'L':
        balance += 1
    else:
        balance -= 1

    if balance == 0:
        ans.append(s[start:i + 1])
        start = i + 1

print(len(ans))
for item in ans:
    print(item)
