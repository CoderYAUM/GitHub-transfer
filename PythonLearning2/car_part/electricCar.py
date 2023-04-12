# import car
# import battery
# from car import Car as C
from car import Car
from battery import Battery
class ElectricCar(Car):
    def __init__(self,make,model,year):
        super().__init__(make,model,year)
        self.battery=Battery()
