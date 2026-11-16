
str = input().strip()

rev_str = str[::-1]

rev_num = int(rev_str)

print(rev_num)

original_num = int(str)

if(original_num == rev_num):
    print("YES\n")
else:
    print("NO\n")