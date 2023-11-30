s = input("Do you agree ? Y-yes N -no. ")

#if s == "Y" or s == "y":
    #print("Agreed.")
#elif s == "N" or s == "n":
    #print("No agreed.")
#else:
#    print("Inocorrect answer !")

if s.lower() in ["yes", "y"]:
    print("Agreed.")
elif s.lower() in ["no", "n"]:
    print("No agreed.")
else:
    print("Inocorrect answer !")
