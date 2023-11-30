import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    # creat new empty dict
    counts = {}
    for row in reader:
        favorite = row["title"]
        if favorite  in counts:
            counts[favorite] +=1
        else:
            counts[favorite] = 1

def get_value(title):
    return counts[title]

# print answer
for favorite in sorted(counts, key=get_value, reverse=True):
    print(f"{favorite}: {counts[favorite]}")
