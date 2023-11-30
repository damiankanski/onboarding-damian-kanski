import csv

with open("favorites.csv", "r") as file:
    #open as dict
    reader = csv.DictReader(file)
    for row in reader:
        favorite = row["title"]
        print(favorite)
