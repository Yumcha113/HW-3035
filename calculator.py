# CS 3035 Homework 1 - Question 1

def add(x, y, z):
    """Add three numbers: x + y + z"""
    return x + y + z

def subtract(x, y, z):
    """Subtract three numbers: z - y - x"""
    return z - y - x

def multiply(x, y):
    """Multiply two numbers: x * y"""
    return x * y

def divide(x, y):
    """Divide two numbers: x / y"""
    return x / y

# Get input values from the user
x = float(input("Enter value for x: "))
y = float(input("Enter value for y: "))
z = float(input("Enter value for z: "))

# Expression:
# ((x + y + z) * x) / ((z - y - x) * y)

numerator = multiply(add(x, y, z), x)
denominator = multiply(subtract(x, y, z), y)

# Check for division by zero
if denominator != 0:
    result = divide(numerator, denominator)
    print("Result:", result)
else:
    print("Error: Division by zero! The denominator is 0.")
