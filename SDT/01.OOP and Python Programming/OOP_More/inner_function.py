def timer():
    def inner():
        print("I am in inner function!")
        print("How are you all?")

    print("I am sajib")
    return inner

timer()()