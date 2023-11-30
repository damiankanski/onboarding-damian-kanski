text = "In the great green room"
words = text.split()

#1
print("Round 1")
for word in words:
    print(word)
print(word)


#2
print("Round 2")
for word in words:
    for c in word:
        print(c)
print()

#3
print("Round 3")
for word in words:
    if "g" in word:
        print(word)
print()

#4
print("Round 4")
for word in words[2:]:
    print(word)
print()

5
print("Round 5")
for word in words:
    print("Good night moon")
print()
