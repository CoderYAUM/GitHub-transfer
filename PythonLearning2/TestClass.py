from restaurant_part.restaurant import Restaurant,IceCreamStand
# from user_part.user import User
# from user_part.admin import Admin
# from user_part.user import User,Admin
from user import User
from admin import Admin
# from car_part.electricCar import ElectricCar as EC


# class Restaurant:
#     def __init__(self, restaurant_name, cuisine_type):
#         self.restaurant_name = restaurant_name
#         self.cuisine_type = cuisine_type
#         self.number_served=0
#
#     def describe_restaurant(self):
#         print(f"The name of the restaurant is {self.restaurant_name}.")
#         print(f"The type of the cuisine is {self.cuisine_type}.")
#
#     def open_restaurant(self):
#         print(f"{self.restaurant_name} is open!")
#
#     def set_number_served(self,number):
#         self.number_served=number
#
#     def increment_number_served(self,number):
#         self.number_served+=number
#
#
# class IceCreamStand(Restaurant):
#     def __init__(self,restaurant_name, cuisine_type):
#         super().__init__(restaurant_name,cuisine_type)
#         self.flavors=['apple','peach','banana']
#
#     def describe_icecream(self):
#         for flavor in self.flavors:
#             print(f"{flavor} icecream")

anicecreamstand=IceCreamStand("ICE","icecream")
anicecreamstand.describe_icecream()
arestaurant = Restaurant('WangDa', 'Chinese food')
print(arestaurant.restaurant_name)
print(arestaurant.cuisine_type)
arestaurant.describe_restaurant()
arestaurant.open_restaurant()
print(f"There were {arestaurant.number_served} people ate in {arestaurant.restaurant_name}.")
arestaurant.number_served=1000000
arestaurant.set_number_served(200000)
arestaurant.increment_number_served(10000)
print(f"There were {arestaurant.number_served} people ate in {arestaurant.restaurant_name}.")
brestaurant = Restaurant("Marriott", "Western")
crestaurant = Restaurant("Hilton", "Western")

brestaurant.describe_restaurant()
crestaurant.describe_restaurant()

print("\n")
# class User:
#     def __init__(self,first_name,last_name):
#         self.first_name=first_name
#         self.last_name=last_name
#         self.login_attempts=0
#
#     def describe_user(self):
#         print(f"The user's name is {self.first_name} {self.last_name}.")
#
#     def greet_user(self):
#         print(f"Hello {self.first_name} {self.last_name}!")
#
#     def increment_login_attempts(self):
#         self.login_attempts+=1
#
#     def reset_login_attempts(self):
#         self.login_attempts=0
#
#
# class Admin(User):
#     def __init__(self,first_name,last_name):
#         super().__init__(first_name,last_name)
#         self.privileges=Privileges()
#
#
# class Privileges:
#     def __init__(self,privileges=['can add post','can delete post','can ban user']):
#         self.privileges=privileges
#
#     def show_privilege(self):
#         for privilege in self.privileges:
#             print(privilege)


anadmin=Admin("Tony","Stark").privileges.show_privilege()

auser=User("Jack","Smith")
buser=User("Tom","Woodlen")
cuser=User("Petter","Park")
# anadmin=Admin("Tony","Stark").privileges.show_privilege()
auser.describe_user()
auser.greet_user()
auser.increment_login_attempts()
auser.increment_login_attempts()
auser.increment_login_attempts()
print(auser.login_attempts)
auser.reset_login_attempts()
print(auser.login_attempts)

buser.describe_user()
buser.greet_user()
cuser.describe_user()
cuser.greet_user()

# class Car:
#     def __init__(self,make,model,year):
#         self.make=make
#         self.model=model
#         self.year=year
#         self.odometer_reading=0
#
#     def get_descriptive_name(self):
#         long_name=f"{self.year} {self.make} {self.model}"
#         return long_name.title()
#         # print(f"{self.year.titlle()}")
#
#     def read_odometer(self):
#         print(f"This car has {self.odometer_reading} miles on it.")
#
#     def update_odometer(self,miles):
#         if miles >= self.odometer_reading:
#             self.odometer_reading=miles
#         else:
#             print("You can't roll back an odometer!")
#
#     def increment_odometer(self,miles):
#         self.odometer_reading+=miles
#
#
# class Battery:
#     def __init__(self,battery_size=75):
#         self.battery_size=battery_size
#
#     def describe_battery(self):
#         print(f"This car has a {self.battery_size}kwh battery.")
#
#     def update_battery(self):
#         if self.battery_size!=100:
#             self.battery_size=100
#
#     def get_range(self):
#         if self.battery_size==75:
#             range=260
#         elif self.battery_size==100:
#             range=315
#         print(f"This can go about {range} miles on a full charge.")
# class ElectricCar(Car):
#     def __init__(self,make,model,year):
#         super().__init__(make,model,year)
#         self.battery=Battery()

# my_car=EC("tesla","model s",2019)
# print(my_car.get_descriptive_name())
# my_car.battery.describe_battery()
# my_car.battery.get_range()
# my_car.battery.update_battery()
# my_car.battery.get_range()