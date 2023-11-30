from cs50 import SQL

#inicialization db
db = SQL("sqlite:///favorites.db")

favorite = input("Favorite: ")


rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE title = ?", favorite)

row = rows[0]
print(row["n"])
 