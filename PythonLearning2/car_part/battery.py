class Battery:
    def __init__(self,battery_size=75):
        self.battery_size=battery_size

    def describe_battery(self):
        print(f"This car has a {self.battery_size}kwh battery.")

    def update_battery(self):
        if self.battery_size!=100:
            self.battery_size=100

    def get_range(self):
        if self.battery_size==75:
            range=260
        elif self.battery_size==100:
            range=315
        print(f"This can go about {range} miles on a full charge.")
