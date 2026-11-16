n = input()

arr = list(map(int, input().split()))

ans = float('inf')
for x in arr:
    
    count = 0
    while x % 2 == 0 :
        x = x/2
        count += 1
    ans = min(ans, count)


print(ans)

fruits = ["Apple", "Banana", "Mango", "Apple"]
print(fruits[0])
student = {
    "name": "Rahim",
    "age": 22,
    "department": "CSE"
}

print(student["name"])