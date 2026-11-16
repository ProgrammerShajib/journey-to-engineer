class Engine:
    def start(self):
        print("Engine started!")

class MusicSystem:
    def play_music(self):
        print("Music is playing!")

class Car:
    def __init__(self):
        self.engine = Engine()
        self.music = MusicSystem()

    def start_car(self):
        self.engine.start()
        self.music.play_music()

car = Car()
car.start_car()