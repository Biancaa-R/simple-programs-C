# 1. Class with Instance Attributes
class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year

# Creating an object of the Car class
car1 = Car("Toyota", "Corolla", 2020)
print(f"Car Make: {car1.make}, Model: {car1.model}, Year: {car1.year}")

# 2. Vehicle Class Without Variables and Methods
class Vehicle:
    pass

# 3. Bus Class Inheriting from Vehicle
class Bus(Vehicle):
    pass

# Creating an object of the Bus class
bus1 = Bus()
print("Bus object created successfully from Vehicle class.")
