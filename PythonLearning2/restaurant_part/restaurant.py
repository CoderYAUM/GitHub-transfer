class Restaurant:
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
        self.number_served=0

    def describe_restaurant(self):
        print(f"The name of the restaurant is {self.restaurant_name}.")
        print(f"The type of the cuisine is {self.cuisine_type}.")

    def open_restaurant(self):
        print(f"{self.restaurant_name} is open!")

    def set_number_served(self,number):
        self.number_served=number

    def increment_number_served(self,number):
        self.number_served+=number


class IceCreamStand(Restaurant):
    def __init__(self,restaurant_name, cuisine_type):
        super().__init__(restaurant_name,cuisine_type)
        self.flavors=['apple','peach','banana']

    def describe_icecream(self):
        for flavor in self.flavors:
            print(f"{flavor} icecream")