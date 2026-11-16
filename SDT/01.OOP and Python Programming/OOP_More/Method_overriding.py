class Person:
    def introduce(self):
        print("I am a person.")

class Cricketer(Person):
    def introduce(self):
        print("I am Sajib.")


person = Person()
cricketer = Cricketer()

person.introduce()
cricketer.introduce()