print("Enter which will be compare")
x = int(input("x: "))
y = int(input("y: "))

if x < y:
    print(f"{y} is greater then {x}")
elif x > y:
    print(f"{x} is greater then {y}")
else:
    print(f"{x} is equal to {y}")

