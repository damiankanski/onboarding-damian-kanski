# TODO
from cs50 import get_string

# user text
text = get_string("Text: ")

# count number of letters in text
num_letters = 0
for c in text:
    #count ih char is letters not a number
    if c.isalpha():
        num_letters += 1

# count numner of words
# separate with split which default have space as separator
num_word = len(text.split())

# num of sentences
num_sentences = text.count(".") + text.count("!") + text.count("?")

# average number of lettear and number of sentences per 100 words
L = (num_letters / num_word) * 100

S = (num_sentences / num_word) * 100

# number of point as per C-L

grade_lvl = 0.0588 * L - 0.296 * S - 15.8
# intiger
round_grade = int(grade_lvl)

# answer
if round_grade >= 16:
    print("Grade 16+")
elif round_grade < 1:
    print("Before Grade 1")
else:
    print(f"Grade {round_grade}")









