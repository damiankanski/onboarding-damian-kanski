import csv
from cs50 import SQL

#spraawdzmay czy house jest na naszej liscie houese jezeli nie ma z petli for przechodzimy do if i dodajmy .appdend do naszego houses
#jezlu nazwa sie zgadza zwiekszany jes licznik count co nie ma dla nas wplywu 
def create_house(house, head, houses):
    count = 0
    for h in houses:
        if h["house"] == house:
            count +=1
    if count == 0:
        houses.append({"house": house, "head": head, })

def create_students(name, students):
    students.append({"student_name": name})

def create_relationship(name, house, relationship):
    relationship.append({"student_name": name, "house": house})

# inicjalizacja bazy danych
db = SQL("sqlite:///roster.db")

#tworzymy listy ktore odpowiadaja naszym kolumna w naszych tabelach w bazie danych
students = []
houses = []
relationship = []

#otwieramy plik csv iterujemy po nazwach kolumn w pliku csv
with open("students.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        name = row["student_name"]
        house = row["house"]
        head = row["head"]

        create_house(house, head, houses)
        create_students(name, students)
        create_relationship(name, house, relationship)

#wprowadzanie danych do refactor table (uzywamy tu wyzeh zdefiniwoanych list)
for student in students:
    db.execute("INSERT INTO new_students (student_name) VALUES (?)", student["student_name"])


for rel in relationship:
    db.execute("INSERT INTO relationship (student_name, house) VALUES (?,?)", rel["student_name"], rel["house"] )

for house in houses:
    db.execute("INSERT INTO houses (house, head) VALUES (?,?)", house["house"], house["head"] )
