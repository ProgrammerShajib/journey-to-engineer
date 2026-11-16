import copy

original = [[1, 2, 3], [4, 5, 6]]

shallow = original.copy();


shallow[0][0] = 99
print("Original:", original)  # আউটপুট: [[99, 2, 3], [4, 5, 6]] (পরিবর্তন হয়ে গেছে!)
print("Shallow:", shallow)    # আউটপুট: [[99, 2, 3], [4, 5, 6]]
