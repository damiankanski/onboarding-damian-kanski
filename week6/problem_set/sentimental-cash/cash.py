# TODO
from cs50 import get_float

def main():
    cents = get_cents()

    #the numebr od 0.25$
    quaters = calculate_quarters(cents)
    cents = cents - quaters * 25

    # numbr of 0.10$
    dimes = calculate_dimes(cents)
    cents = cents - dimes * 10

    # number of 0.05$
    nickles = calculate_nickles(cents)
    cents = cents - nickles * 5

    #NUMBER OF 0.01$
    pennies = calculate_pennies(cents)
    cents = cents - pennies * 1

    # totla number of coins
    total = quaters + dimes + nickles + pennies

    print(total)


# ask users for coins
def get_cents():
    while True:
        prompt = get_float("Value of coins: ")
        if prompt >= 0:
            break
    cents = prompt * 100
    return cents

# chec how many quater is in cents
def calculate_quarters(cents):
    count = 0
    while(cents >= 25):
        cents = cents - 25
        count += 1
    return count

def calculate_dimes(cents):
    count = 0
    while(cents >= 10):
        cents = cents - 10
        count += 1
    return count


def calculate_nickles(cents):
    count = 0
    while(cents >= 5):
        cents = cents - 5
        count += 1
    return count

def calculate_pennies(cents):
    count = 0
    while(cents >= 1):
        cents = cents - 1
        count += 1
    return count



main()


