class Calculator:
    # class atribute
    version = "1.0"
    total_calculatons = 0

    # Constructor
    def __init__(self,name):
        self.name = name 
        self.history = []

    # Addition methode
    def add(self,a,b):
        result = a+b


        self.history.append((a,"+",b, result))
        Calculator.total_calculatons += 1

        return result


    # Subtraction methode
    def subtract(self,a,b):
        result = abs(a-b)
        self.history.append((a,"-",b , result))

        Calculator.total_calculatons += 1

        return result

    # Multiplication

    def multiply(self, a,b):
        result = a*b

        self.history.append((a,"*", b , result))

        Calculator.total_calculatons += 1

        return result

    def divide(self, a, b):
        if b == 0:
            return "Error: Cannot divide by zero!"

        result = a/b
        self.history.append((a,"/", b, result))

        Calculator.total_calculatons += 1
        return result

    # Display History
    
    def show_history(self):

        print(f"\nHistory of {self.name}")

        for item in self.history:
            a, operator, b, result = item

            print(f"{a} {operator} {b} = {result}")

    def __repr__(self):
        return (
                   f"Calculator(name={self.name!r}, "
                   f"version={self.version!r}, "
                   f"calculations={len(self.history)})"
               )

# Creating Objects
calculator1 = Calculator("Scientific Calculator")
calculator2 = Calculator("Basic Calculator")


# Performing Operations
print(calculator1.add(10, 5))
print(calculator1.subtract(10, 5))
print(calculator1.multiply(10, 5))
print(calculator1.divide(10, 5))

# Division by Zero
print(calculator1.divide(10, 0))

# Display History
calculator1.show_history()

# # Object Representation
# print(calculator1)
# print(calculator2)

# Class Attribute
print("Total Calculations:",
      Calculator.total_calculatons)


print(calculator1)
print(calculator2)