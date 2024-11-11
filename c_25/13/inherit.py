# Defining the parent class
class Parent:
    def __init__(self, name):
        self.name = name

    def show_name(self):
        print(f"Name: {self.name}")

# Defining the child class that inherits from the Parent class
class Child(Parent):
    def __init__(self, name, age):
        # Call the constructor of the Parent class
        super().__init__(name)
        self.age = age

    def show_age(self):
        print(f"Age: {self.age}")

# Creating an object of the Child class
child_obj = Child("Alice Darl", 10)
child_obj.show_name()  # Method inherited from Parent class
child_obj.show_age()   # Method from Child class
