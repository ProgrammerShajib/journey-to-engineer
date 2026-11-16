import math
import time
# Decorator হলো এমন একটি function, যেটি অন্য একটি function-কে modify বা extend করতে পারে, তার original code পরিবর্তন না করেই।

def timer(func):
    def inner(n):
        print("time is started Sajib")
        start = time.time()
        func(n)
        print("Please done what you want to do.")
        end = time.time()
        print(f"Total time taken: {end - start}")
    return inner

@timer
def get_factorial(n):
    result = math.factorial(n)

    print(result)

get_factorial(5)