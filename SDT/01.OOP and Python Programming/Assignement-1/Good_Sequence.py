# n = int(input())

# arr = list(map(int,input().split()))
# freq ={}
# for i in arr:
#     freq[i] = freq.get(i,0)+1

# ans = 0
# for x,count in freq.items():

#     if(count >= x):
#         ans += count -x
#     else:
#         ans += count

# print(ans)

from collections import Counter

n = input()
arr = list(map(int, input().split()))

freq = Counter(arr)

ans = 0
for x,count in freq.items():

    if count >= x:
        ans += count - x
    else:
        ans += count

print(ans )