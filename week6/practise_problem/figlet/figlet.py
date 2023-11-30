import sys
import random
from pyfiglet import Figlet


if len(sys.argv) == 1:
    randomfont = True
elif len(sys.argv) == 3 and (sys.argv[1] == "-f" or sys.argv[1] == "--front"):
    randomfont = False
else:
    sys.exit(1)




figlet = Figlet()
figlet.getFonts()

if randomfont == False:
    try:
        figlet.setFont(font=sys.argv[2])
    except:
        print("Error")
        sys.exit(1)
else:
    font = random.choice(figlet.getFonts())

answer = input("Input: ")
print(f"{print(figlet.renderText(answer))}")






