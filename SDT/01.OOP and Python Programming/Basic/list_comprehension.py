# Demo code to test the list comprehension and loop logic from the video

players = ['sakib', 'musfik', 'liton']
ages = [38, 37, 32]


age_comb = []

for player in players:
    print('player: ', player)
    for age in ages:
        print('age : ', age)
        age_comb.append([player,age])


# print(age_comb)

age_comb2 = [[player, age] for player in players for age in ages]
print('Age comb2: ',age_comb2)