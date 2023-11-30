import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    # make variele need to count how many times in fie wi have directly movie
    office, friends = 0, 0
    for row in reader:
        favorite = row["title"]
        # for loop neede to count
        if favorite == "Friends":
            friends += 1
        elif favorite == "The Office":
            office += 1
# print answer
print(f"The office: {office}")
print(f"Friends: {friends}")


