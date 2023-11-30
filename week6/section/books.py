books = []

# add 3 books
for i in range(3):
    book = {}
    book["title"] = input("Title: ").strip().capitalize()
    book["author"] = input("Author: ")

    books.append(book)

print(books)

