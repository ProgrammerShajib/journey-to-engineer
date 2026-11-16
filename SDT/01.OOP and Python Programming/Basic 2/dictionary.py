d = {"name": "Kala paki", "age": 25, "job": "facebooker", "Address" : "Kamalapur"}
 
print(d)

# loop in dictionary on the name
for key in d:
    print(key)

# loop in dictionary in key value
for key , val in d.items():
    print(key, ":" , val)

# loop in dictionary in key with index
for i , n in enumerate(d):
    print(i , n);