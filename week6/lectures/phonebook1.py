import csv

file = open("phonebook1.csv", "a")

name = input("Name: ")
number = input("Number: ")

writer = csv.writer(file)
writer.writerow([name, number])

file.close()


# alternative version with useing with

with open("phonebook1.csv", "a") as file:

    name = input("Name: ")
    number = input("Number: ")

    writer = csv.writer(file)
    writer.writerow([name, number])


# in case below we define directly Dict

with open("phonebook1.csv", "a") as file:

    name = input("Name: ")
    number = input("Number: ")

    writer = csv.DictWriter(file, fieldnames = ["name", "number"])
    writer.writerow({"name": name, "number": number,})
