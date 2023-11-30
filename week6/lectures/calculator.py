from cs50 import get_int

print("Enter your values.")

# we use cs50 lib
#x = get_int("x: ")
#y = get_int("y: ")

x = input("x: ")
y = input("y: ")

x = int(x)
y = int(y)

z = x / y

print(x + y)
print(z)
# z okreslona liczba po przecinku
print(f"{z:.50f}")
