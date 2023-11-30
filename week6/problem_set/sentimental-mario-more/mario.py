# TODO
def main():
    while True:
        height = int(input("Height: "))
        if height >= 0 and height <= 8:
            break

    for num_hashes in range(1, height + 1):

        #space on the left
        num_spaces = height - num_hashes

        print(" " * num_spaces, end="")
        print("#" * num_hashes, end="")

        #separator
        print("  ", end="")
        #secend part of piramid
        print("#" * num_hashes)

main()
